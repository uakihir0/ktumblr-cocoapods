Pod::Spec.new do |spec|
    spec.name                     = 'ktumblr-release'
    spec.version                  = '0.0.1'
    spec.homepage                 = 'https://github.com/uakihir0/ktumblr'
    spec.source                   = { :http=> ''}
    spec.authors                  = 'Akihiro Urushihara'
    spec.license                  = 'MIT'
    spec.summary                  = 'ktumblr is Tumblr library for Kotlin Multiplatform.'
    spec.vendored_frameworks      = 'release/ktumblr.xcframework'
    spec.libraries                = 'c++'
end
