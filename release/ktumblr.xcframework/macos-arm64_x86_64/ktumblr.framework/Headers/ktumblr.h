#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KtumblrKtumblrFactory, KtumblrCoreAuthAuthorizeUrlRequest, KtumblrCoreAuthOAuth2TokenResponse, KtumblrCoreResponse<T>, KtumblrCoreAuthOAuth2TokenRequest, KtumblrCoreAuthOAuth2TokenRefreshRequest, KtumblrCoreBlogAvatarRequest, KtumblrCoreBlogPostsResponse, KtumblrCoreBody<T>, KtumblrCoreBlogDraftsRequest, KtumblrCoreBlogFollowersResponse, KtumblrCoreBlogFollowersRequest, KtumblrCoreBlogFollowingResponse, KtumblrCoreBlogFollowingRequest, KtumblrCoreBlogInfoResponse, KtumblrCoreBlogInfoRequest, KtumblrCoreBlogLikesResponse, KtumblrCoreBlogLikesRequest, KtumblrCoreBlogPostsRequest, KtumblrCoreBlogQueueRequest, KtumblrCoreBlogSubmissionsRequest, KtumblrCoreResponseUnit, KtumblrCoreBlogPostRequest, KtumblrCoreBlogDeleteRequest, KtumblrCoreBlogReblogRequest, KtumblrCorePost, KtumblrKotlinArray<T>, KtumblrCoreTaggedRequest, KtumblrCoreUserFollowRequest, KtumblrCoreUserLikeRequest, KtumblrCoreUserUnfollowRequest, KtumblrCoreUserUnlikeRequest, KtumblrCoreUserResponse, KtumblrCoreUserDashboardResponse, KtumblrCoreUserDashboardRequest, KtumblrCoreUserFollowingResponse, KtumblrCoreUserFollowingRequest, KtumblrCoreUserLikesResponse, KtumblrCoreUserLikesRequest, KtumblrCoreAuthOAuth2TokenResponseCompanion, KtumblrCoreBlogPostsResponseCompanion, KtumblrCoreBlog, KtumblrCoreBodyCompanion, KtumblrCoreMeta, KtumblrCoreBlogFollowersResponseCompanion, KtumblrCoreFollowerUser, KtumblrCoreBlogFollowingResponseCompanion, KtumblrCoreBlogInfoResponseCompanion, KtumblrCoreBlogLikesResponseCompanion, KtumblrCorePostCompanion, KtumblrCoreLegacyAnswerPost, KtumblrCoreLegacyLinkPost, KtumblrCoreLegacyPhotoPost, KtumblrCoreLegacyQuotePost, KtumblrCoreLegacyTextPost, KtumblrCoreLegacyVideoPost, KtumblrCoreNote, KtumblrCoreReblog, KtumblrCoreTrail, KtumblrCoreUserResponseCompanion, KtumblrCoreUser, KtumblrCoreUserDashboardResponseCompanion, KtumblrCoreUserFollowingResponseCompanion, KtumblrCoreUserLikesResponseCompanion, KtumblrCoreResource, KtumblrCoreBlogCompanion, KtumblrCoreBlogAvatar, KtumblrCoreBlogTheme, KtumblrCoreMetaCompanion, KtumblrCoreFollowerUserCompanion, KtumblrCoreLegacyAnswerPostCompanion, KtumblrCoreLegacyLinkPostCompanion, KtumblrCoreLegacyPhotoPostCompanion, KtumblrCorePhoto, KtumblrCoreLegacyQuotePostCompanion, KtumblrCoreLegacyTextPostCompanion, KtumblrCoreLegacyVideoPostCompanion, KtumblrCoreVideo, KtumblrCoreNoteCompanion, KtumblrCoreReblogCompanion, KtumblrCoreTrailCompanion, KtumblrCoreBlogInTrail, KtumblrCoreIdInTrail, KtumblrCoreUserCompanion, KtumblrCoreBlogAvatarCompanion, KtumblrCoreBlogThemeCompanion, KtumblrCorePhotoCompanion, KtumblrCorePhotoSize, KtumblrCoreVideoCompanion, KtumblrCoreBlogInTrailCompanion, KtumblrCoreIdInTrailCompanion, KtumblrKotlinx_serialization_coreSerializersModule, KtumblrKotlinx_serialization_coreSerialKind, KtumblrKotlinNothing, KtumblrCorePhotoSizeCompanion;

@protocol KtumblrCoreTumblr, KtumblrCoreAuthResource, KtumblrCoreBlogResource, KtumblrCoreTaggedResource, KtumblrCoreUserResource, KtumblrCoreMapRequest, KtumblrKotlinIterator, KtumblrKotlinx_serialization_coreKSerializer, KtumblrKotlinx_serialization_coreEncoder, KtumblrKotlinx_serialization_coreSerialDescriptor, KtumblrKotlinx_serialization_coreSerializationStrategy, KtumblrKotlinx_serialization_coreDecoder, KtumblrKotlinx_serialization_coreDeserializationStrategy, KtumblrKotlinx_serialization_coreCompositeEncoder, KtumblrKotlinAnnotation, KtumblrKotlinx_serialization_coreCompositeDecoder, KtumblrKotlinx_serialization_coreSerializersModuleCollector, KtumblrKotlinKClass, KtumblrKotlinKDeclarationContainer, KtumblrKotlinKAnnotatedElement, KtumblrKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface KtumblrBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface KtumblrBase (KtumblrBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface KtumblrMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KtumblrMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorKtumblrKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface KtumblrNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface KtumblrByte : KtumblrNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface KtumblrUByte : KtumblrNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface KtumblrShort : KtumblrNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface KtumblrUShort : KtumblrNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface KtumblrInt : KtumblrNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface KtumblrUInt : KtumblrNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface KtumblrLong : KtumblrNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface KtumblrULong : KtumblrNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface KtumblrFloat : KtumblrNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface KtumblrDouble : KtumblrNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface KtumblrBoolean : KtumblrNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtumblrFactory")))
@interface KtumblrKtumblrFactory : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ktumblrFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrKtumblrFactory *shared __attribute__((swift_name("shared")));
- (id<KtumblrCoreTumblr>)instanceClientId:(NSString *)clientId clientSecret:(NSString * _Nullable)clientSecret accessToken:(NSString * _Nullable)accessToken refreshToken:(NSString * _Nullable)refreshToken __attribute__((swift_name("instance(clientId:clientSecret:accessToken:refreshToken:)")));
@end

__attribute__((swift_name("CoreTumblr")))
@protocol KtumblrCoreTumblr
@required
- (id<KtumblrCoreAuthResource>)auth __attribute__((swift_name("auth()")));
- (id<KtumblrCoreBlogResource>)blog __attribute__((swift_name("blog()")));
- (id<KtumblrCoreTaggedResource>)tagged __attribute__((swift_name("tagged()")));
- (id<KtumblrCoreUserResource>)user __attribute__((swift_name("user()")));
@end

__attribute__((swift_name("CoreAuthResource")))
@protocol KtumblrCoreAuthResource
@required
- (NSString *)authorizeUrlRequest:(KtumblrCoreAuthAuthorizeUrlRequest *)request __attribute__((swift_name("authorizeUrl(request:)")));
- (KtumblrCoreResponse<KtumblrCoreAuthOAuth2TokenResponse *> *)oAuth2TokenRequest:(KtumblrCoreAuthOAuth2TokenRequest *)request __attribute__((swift_name("oAuth2Token(request:)")));
- (KtumblrCoreResponse<KtumblrCoreAuthOAuth2TokenResponse *> *)oAuth2TokenRefreshRequest:(KtumblrCoreAuthOAuth2TokenRefreshRequest *)request __attribute__((swift_name("oAuth2TokenRefresh(request:)")));
@end

__attribute__((swift_name("CoreBlogResource")))
@protocol KtumblrCoreBlogResource
@required
- (KtumblrCoreResponse<NSString *> *)blogAvatarRequest:(KtumblrCoreBlogAvatarRequest *)request __attribute__((swift_name("blogAvatar(request:)")));
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrCoreBlogPostsResponse *> *> *)blogDraftPostsRequest:(KtumblrCoreBlogDraftsRequest *)request __attribute__((swift_name("blogDraftPosts(request:)")));
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrCoreBlogFollowersResponse *> *> *)blogFollowersRequest:(KtumblrCoreBlogFollowersRequest *)request __attribute__((swift_name("blogFollowers(request:)")));
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrCoreBlogFollowingResponse *> *> *)blogFollowingRequest:(KtumblrCoreBlogFollowingRequest *)request __attribute__((swift_name("blogFollowing(request:)")));
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrCoreBlogInfoResponse *> *> *)blogInfoRequest:(KtumblrCoreBlogInfoRequest *)request __attribute__((swift_name("blogInfo(request:)")));
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrCoreBlogLikesResponse *> *> *)blogLikesRequest:(KtumblrCoreBlogLikesRequest *)request __attribute__((swift_name("blogLikes(request:)")));
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrCoreBlogPostsResponse *> *> *)blogPostsRequest:(KtumblrCoreBlogPostsRequest *)request __attribute__((swift_name("blogPosts(request:)")));
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrCoreBlogPostsResponse *> *> *)blogQueuedPostsRequest:(KtumblrCoreBlogQueueRequest *)request __attribute__((swift_name("blogQueuedPosts(request:)")));
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrCoreBlogPostsResponse *> *> *)blogSubmissionsRequest:(KtumblrCoreBlogSubmissionsRequest *)request __attribute__((swift_name("blogSubmissions(request:)")));
- (KtumblrCoreResponseUnit *)postCreateRequest:(KtumblrCoreBlogPostRequest *)request __attribute__((swift_name("postCreate(request:)")));
- (KtumblrCoreResponseUnit *)postDeleteRequest:(KtumblrCoreBlogDeleteRequest *)request __attribute__((swift_name("postDelete(request:)")));
- (KtumblrCoreResponseUnit *)postEditRequest:(KtumblrCoreBlogPostRequest *)request __attribute__((swift_name("postEdit(request:)")));
- (KtumblrCoreResponseUnit *)postReblogRequest:(KtumblrCoreBlogReblogRequest *)request __attribute__((swift_name("postReblog(request:)")));
@end

__attribute__((swift_name("CoreTaggedResource")))
@protocol KtumblrCoreTaggedResource
@required
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrKotlinArray<KtumblrCorePost *> *> *> *)taggedRequest:(KtumblrCoreTaggedRequest *)request __attribute__((swift_name("tagged(request:)")));
@end

__attribute__((swift_name("CoreUserResource")))
@protocol KtumblrCoreUserResource
@required
- (KtumblrCoreResponseUnit *)followRequest:(KtumblrCoreUserFollowRequest *)request __attribute__((swift_name("follow(request:)")));
- (KtumblrCoreResponseUnit *)likeRequest:(KtumblrCoreUserLikeRequest *)request __attribute__((swift_name("like(request:)")));
- (KtumblrCoreResponseUnit *)unfollowRequest:(KtumblrCoreUserUnfollowRequest *)request __attribute__((swift_name("unfollow(request:)")));
- (KtumblrCoreResponseUnit *)unlikeRequest:(KtumblrCoreUserUnlikeRequest *)request __attribute__((swift_name("unlike(request:)")));
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrCoreUserResponse *> *> *)user __attribute__((swift_name("user()")));
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrCoreUserDashboardResponse *> *> *)userDashboardRequest:(KtumblrCoreUserDashboardRequest *)request __attribute__((swift_name("userDashboard(request:)")));
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrCoreUserFollowingResponse *> *> *)userFollowingRequest:(KtumblrCoreUserFollowingRequest *)request __attribute__((swift_name("userFollowing(request:)")));
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrCoreUserLikesResponse *> *> *)userLikesRequest:(KtumblrCoreUserLikesRequest *)request __attribute__((swift_name("userLikes(request:)")));
@end

__attribute__((swift_name("CoreMapRequest")))
@protocol KtumblrCoreMapRequest
@required
- (void)addParam:(KtumblrMutableDictionary<NSString *, id> *)receiver key:(NSString *)key value:(id _Nullable)value __attribute__((swift_name("addParam(_:key:value:)")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAuthAuthorizeUrlRequest")))
@interface KtumblrCoreAuthAuthorizeUrlRequest : KtumblrBase <KtumblrCoreMapRequest>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KtumblrMutableDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable redirectUri __attribute__((swift_name("redirectUri")));
@property NSString *responseType __attribute__((swift_name("responseType")));
@property NSString *scope __attribute__((swift_name("scope")));
@property NSString * _Nullable state __attribute__((swift_name("state")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAuthOAuth2TokenResponse")))
@interface KtumblrCoreAuthOAuth2TokenResponse : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCoreAuthOAuth2TokenResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="access_token")
*/
@property NSString * _Nullable accessToken __attribute__((swift_name("accessToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expires_in")
*/
@property KtumblrInt * _Nullable expiresIn __attribute__((swift_name("expiresIn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="refresh_token")
*/
@property NSString * _Nullable refreshToken __attribute__((swift_name("refreshToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="scope")
*/
@property NSString * _Nullable scope __attribute__((swift_name("scope")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="token_type")
*/
@property NSString * _Nullable tokenType __attribute__((swift_name("tokenType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResponse")))
@interface KtumblrCoreResponse<T> : KtumblrBase
- (instancetype)initWithData:(T _Nullable)data json:(NSString *)json status:(KtumblrInt * _Nullable)status message:(NSString * _Nullable)message __attribute__((swift_name("init(data:json:status:message:)"))) __attribute__((objc_designated_initializer));
- (KtumblrCoreResponse<T> *)doCopyData:(T _Nullable)data json:(NSString *)json status:(KtumblrInt * _Nullable)status message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(data:json:status:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property T _Nullable data __attribute__((swift_name("data")));
@property NSString *json __attribute__((swift_name("json")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) KtumblrInt * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAuthOAuth2TokenRequest")))
@interface KtumblrCoreAuthOAuth2TokenRequest : KtumblrBase <KtumblrCoreMapRequest>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable clientId __attribute__((swift_name("clientId")));
@property NSString * _Nullable clientSecret __attribute__((swift_name("clientSecret")));
@property NSString * _Nullable code __attribute__((swift_name("code")));
@property NSString *grantType __attribute__((swift_name("grantType")));
@property NSString * _Nullable redirectUri __attribute__((swift_name("redirectUri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAuthOAuth2TokenRefreshRequest")))
@interface KtumblrCoreAuthOAuth2TokenRefreshRequest : KtumblrBase <KtumblrCoreMapRequest>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable clientId __attribute__((swift_name("clientId")));
@property NSString * _Nullable clientSecret __attribute__((swift_name("clientSecret")));
@property NSString *grantType __attribute__((swift_name("grantType")));
@property NSString * _Nullable refreshToken __attribute__((swift_name("refreshToken")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogAvatarRequest")))
@interface KtumblrCoreBlogAvatarRequest : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable blogName __attribute__((swift_name("blogName")));
@property KtumblrInt * _Nullable size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogPostsResponse")))
@interface KtumblrCoreBlogPostsResponse : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCoreBlogPostsResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blog")
*/
@property KtumblrCoreBlog * _Nullable blog __attribute__((swift_name("blog")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="posts")
*/
@property KtumblrKotlinArray<KtumblrCorePost *> * _Nullable posts __attribute__((swift_name("posts")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="total_posts")
*/
@property KtumblrInt * _Nullable totalPosts __attribute__((swift_name("totalPosts")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBody")))
@interface KtumblrCoreBody<T> : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCoreBodyCompanion *companion __attribute__((swift_name("companion")));
@property KtumblrCoreMeta * _Nullable meta __attribute__((swift_name("meta")));
@property T _Nullable response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogDraftsRequest")))
@interface KtumblrCoreBlogDraftsRequest : KtumblrBase <KtumblrCoreMapRequest>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KtumblrMutableDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property KtumblrInt * _Nullable beforeId __attribute__((swift_name("beforeId")));
@property NSString * _Nullable blogName __attribute__((swift_name("blogName")));
@property NSString * _Nullable filter __attribute__((swift_name("filter")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogFollowersResponse")))
@interface KtumblrCoreBlogFollowersResponse : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCoreBlogFollowersResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="total_users")
*/
@property KtumblrInt * _Nullable totalUsers __attribute__((swift_name("totalUsers")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="users")
*/
@property KtumblrKotlinArray<KtumblrCoreFollowerUser *> * _Nullable users __attribute__((swift_name("users")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogFollowersRequest")))
@interface KtumblrCoreBlogFollowersRequest : KtumblrBase <KtumblrCoreMapRequest>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KtumblrMutableDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable blogName __attribute__((swift_name("blogName")));
@property KtumblrInt * _Nullable limit __attribute__((swift_name("limit")));
@property KtumblrInt * _Nullable offset __attribute__((swift_name("offset")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogFollowingResponse")))
@interface KtumblrCoreBlogFollowingResponse : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCoreBlogFollowingResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blogs")
*/
@property KtumblrKotlinArray<KtumblrCoreBlog *> * _Nullable blogs __attribute__((swift_name("blogs")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="total_blogs")
*/
@property KtumblrInt * _Nullable totalBlogs __attribute__((swift_name("totalBlogs")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogFollowingRequest")))
@interface KtumblrCoreBlogFollowingRequest : KtumblrBase <KtumblrCoreMapRequest>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KtumblrMutableDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable blogName __attribute__((swift_name("blogName")));
@property KtumblrInt * _Nullable limit __attribute__((swift_name("limit")));
@property KtumblrInt * _Nullable offset __attribute__((swift_name("offset")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogInfoResponse")))
@interface KtumblrCoreBlogInfoResponse : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCoreBlogInfoResponseCompanion *companion __attribute__((swift_name("companion")));
@property KtumblrCoreBlog * _Nullable blog __attribute__((swift_name("blog")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogInfoRequest")))
@interface KtumblrCoreBlogInfoRequest : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable blogName __attribute__((swift_name("blogName")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogLikesResponse")))
@interface KtumblrCoreBlogLikesResponse : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCoreBlogLikesResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="liked_count")
*/
@property KtumblrInt * _Nullable likedCount __attribute__((swift_name("likedCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="liked_posts")
*/
@property KtumblrKotlinArray<KtumblrCorePost *> * _Nullable likedPosts __attribute__((swift_name("likedPosts")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogLikesRequest")))
@interface KtumblrCoreBlogLikesRequest : KtumblrBase <KtumblrCoreMapRequest>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KtumblrMutableDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property KtumblrInt * _Nullable after __attribute__((swift_name("after")));
@property KtumblrInt * _Nullable before __attribute__((swift_name("before")));
@property NSString * _Nullable blogName __attribute__((swift_name("blogName")));
@property KtumblrInt * _Nullable limit __attribute__((swift_name("limit")));
@property KtumblrInt * _Nullable offset __attribute__((swift_name("offset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogPostsRequest")))
@interface KtumblrCoreBlogPostsRequest : KtumblrBase <KtumblrCoreMapRequest>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KtumblrMutableDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property KtumblrInt * _Nullable before __attribute__((swift_name("before")));
@property NSString * _Nullable blogName __attribute__((swift_name("blogName")));
@property NSString * _Nullable filter __attribute__((swift_name("filter")));
@property KtumblrInt * _Nullable id __attribute__((swift_name("id")));
@property KtumblrInt * _Nullable limit __attribute__((swift_name("limit")));
@property KtumblrBoolean * _Nullable notesInfo __attribute__((swift_name("notesInfo")));
@property KtumblrBoolean * _Nullable npf __attribute__((swift_name("npf")));
@property KtumblrInt * _Nullable offset __attribute__((swift_name("offset")));
@property KtumblrBoolean * _Nullable reblogInfo __attribute__((swift_name("reblogInfo")));
@property NSString * _Nullable tag __attribute__((swift_name("tag")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogQueueRequest")))
@interface KtumblrCoreBlogQueueRequest : KtumblrBase <KtumblrCoreMapRequest>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KtumblrMutableDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable blogName __attribute__((swift_name("blogName")));
@property NSString * _Nullable filter __attribute__((swift_name("filter")));
@property KtumblrInt * _Nullable limit __attribute__((swift_name("limit")));
@property KtumblrInt * _Nullable offset __attribute__((swift_name("offset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogSubmissionsRequest")))
@interface KtumblrCoreBlogSubmissionsRequest : KtumblrBase <KtumblrCoreMapRequest>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KtumblrMutableDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable blogName __attribute__((swift_name("blogName")));
@property NSString * _Nullable filter __attribute__((swift_name("filter")));
@property NSString * _Nullable offset __attribute__((swift_name("offset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResponseUnit")))
@interface KtumblrCoreResponseUnit : KtumblrBase
- (instancetype)initWithJson:(NSString *)json status:(KtumblrInt * _Nullable)status message:(NSString * _Nullable)message __attribute__((swift_name("init(json:status:message:)"))) __attribute__((objc_designated_initializer));
@property NSString *json __attribute__((swift_name("json")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) KtumblrInt * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("CoreBlogPostRequest")))
@interface KtumblrCoreBlogPostRequest : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KtumblrMutableDictionary<NSString *, id> *)toBaseMap __attribute__((swift_name("toBaseMap()")));
@property NSString * _Nullable blogName __attribute__((swift_name("blogName")));
@property NSString * _Nullable date __attribute__((swift_name("date")));
@property NSString * _Nullable format __attribute__((swift_name("format")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KtumblrBoolean * _Nullable nativeInlineImages __attribute__((swift_name("nativeInlineImages")));
@property NSString * _Nullable slug __attribute__((swift_name("slug")));
@property NSString * _Nullable state __attribute__((swift_name("state")));
@property NSString * _Nullable tags __attribute__((swift_name("tags")));
@property NSString * _Nullable tweet __attribute__((swift_name("tweet")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogDeleteRequest")))
@interface KtumblrCoreBlogDeleteRequest : KtumblrBase <KtumblrCoreMapRequest>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KtumblrMutableDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable blogName __attribute__((swift_name("blogName")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogReblogRequest")))
@interface KtumblrCoreBlogReblogRequest : KtumblrBase <KtumblrCoreMapRequest>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KtumblrMutableDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable blogName __attribute__((swift_name("blogName")));
@property NSString * _Nullable comment __attribute__((swift_name("comment")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KtumblrBoolean * _Nullable nativeInlineImages __attribute__((swift_name("nativeInlineImages")));
@property NSString * _Nullable reblogKey __attribute__((swift_name("reblogKey")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=work/socialhub/ktumblr/util/json/PostSerializer))
*/
__attribute__((swift_name("CorePost")))
@interface KtumblrCorePost : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCorePostCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) KtumblrCoreLegacyAnswerPost * _Nullable asLegacyAnswerPost __attribute__((swift_name("asLegacyAnswerPost")));
@property (readonly) KtumblrCoreLegacyLinkPost * _Nullable asLegacyLinkPost __attribute__((swift_name("asLegacyLinkPost")));
@property (readonly) KtumblrCoreLegacyPhotoPost * _Nullable asLegacyPhotoPost __attribute__((swift_name("asLegacyPhotoPost")));
@property (readonly) KtumblrCoreLegacyQuotePost * _Nullable asLegacyQuotePost __attribute__((swift_name("asLegacyQuotePost")));
@property (readonly) KtumblrCoreLegacyTextPost * _Nullable asLegacyTextPost __attribute__((swift_name("asLegacyTextPost")));
@property (readonly) KtumblrCoreLegacyVideoPost * _Nullable asLegacyVideoPost __attribute__((swift_name("asLegacyVideoPost")));
@property (getter=blog_) KtumblrCoreBlog * _Nullable blog __attribute__((swift_name("blog")));
@property NSString * _Nullable blogName __attribute__((swift_name("blogName")));
@property NSString * _Nullable body __attribute__((swift_name("body")));
@property NSString * _Nullable date __attribute__((swift_name("date")));
@property NSString * _Nullable format __attribute__((swift_name("format")));
@property NSString * _Nullable genesisPostId __attribute__((swift_name("genesisPostId")));
@property NSString * _Nullable idString __attribute__((swift_name("idString")));
@property KtumblrBoolean * _Nullable isBookmarklet __attribute__((swift_name("isBookmarklet")));
@property KtumblrBoolean * _Nullable isLiked __attribute__((swift_name("isLiked")));
@property KtumblrBoolean * _Nullable isMobile __attribute__((swift_name("isMobile")));
@property KtumblrInt * _Nullable noteCount __attribute__((swift_name("noteCount")));
@property KtumblrKotlinArray<KtumblrCoreNote *> * _Nullable notes __attribute__((swift_name("notes")));
@property NSString * _Nullable parentPostUrl __attribute__((swift_name("parentPostUrl")));
@property NSString * _Nullable postUrl __attribute__((swift_name("postUrl")));
@property KtumblrCoreReblog * _Nullable reblog __attribute__((swift_name("reblog")));
@property NSString * _Nullable reblogKey __attribute__((swift_name("reblogKey")));
@property KtumblrBoolean * _Nullable rebloggedFromCanMessage __attribute__((swift_name("rebloggedFromCanMessage")));
@property KtumblrBoolean * _Nullable rebloggedFromFollowing __attribute__((swift_name("rebloggedFromFollowing")));
@property NSString * _Nullable rebloggedFromId __attribute__((swift_name("rebloggedFromId")));
@property NSString * _Nullable rebloggedFromName __attribute__((swift_name("rebloggedFromName")));
@property NSString * _Nullable rebloggedFromTitle __attribute__((swift_name("rebloggedFromTitle")));
@property NSString * _Nullable rebloggedFromUrl __attribute__((swift_name("rebloggedFromUrl")));
@property NSString * _Nullable rebloggedFromUuid __attribute__((swift_name("rebloggedFromUuid")));
@property KtumblrBoolean * _Nullable rebloggedRootCanMessage __attribute__((swift_name("rebloggedRootCanMessage")));
@property KtumblrBoolean * _Nullable rebloggedRootFollowing __attribute__((swift_name("rebloggedRootFollowing")));
@property NSString * _Nullable rebloggedRootId __attribute__((swift_name("rebloggedRootId")));
@property NSString * _Nullable rebloggedRootName __attribute__((swift_name("rebloggedRootName")));
@property NSString * _Nullable rebloggedRootTitle __attribute__((swift_name("rebloggedRootTitle")));
@property NSString * _Nullable rebloggedRootUrl __attribute__((swift_name("rebloggedRootUrl")));
@property NSString * _Nullable rebloggedRootUuid __attribute__((swift_name("rebloggedRootUuid")));
@property NSString * _Nullable slug __attribute__((swift_name("slug")));
@property NSString * _Nullable sourceTitle __attribute__((swift_name("sourceTitle")));
@property NSString * _Nullable sourceUrl __attribute__((swift_name("sourceUrl")));
@property NSString * _Nullable state __attribute__((swift_name("state")));
@property NSString * _Nullable summary __attribute__((swift_name("summary")));
@property KtumblrKotlinArray<NSString *> * _Nullable tags __attribute__((swift_name("tags")));
@property KtumblrInt * _Nullable timestamp __attribute__((swift_name("timestamp")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@property KtumblrKotlinArray<KtumblrCoreTrail *> * _Nullable trail __attribute__((swift_name("trail")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KtumblrKotlinArray<T> : KtumblrBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KtumblrInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KtumblrKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTaggedRequest")))
@interface KtumblrCoreTaggedRequest : KtumblrBase <KtumblrCoreMapRequest>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KtumblrMutableDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property KtumblrInt * _Nullable before __attribute__((swift_name("before")));
@property NSString * _Nullable filter __attribute__((swift_name("filter")));
@property KtumblrInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserFollowRequest")))
@interface KtumblrCoreUserFollowRequest : KtumblrBase <KtumblrCoreMapRequest>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KtumblrMutableDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable email __attribute__((swift_name("email")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserLikeRequest")))
@interface KtumblrCoreUserLikeRequest : KtumblrBase <KtumblrCoreMapRequest>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KtumblrMutableDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable reblogKey __attribute__((swift_name("reblogKey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserUnfollowRequest")))
@interface KtumblrCoreUserUnfollowRequest : KtumblrBase <KtumblrCoreMapRequest>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KtumblrMutableDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserUnlikeRequest")))
@interface KtumblrCoreUserUnlikeRequest : KtumblrBase <KtumblrCoreMapRequest>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KtumblrMutableDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable reblogKey __attribute__((swift_name("reblogKey")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserResponse")))
@interface KtumblrCoreUserResponse : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCoreUserResponseCompanion *companion __attribute__((swift_name("companion")));
@property KtumblrCoreUser * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserDashboardResponse")))
@interface KtumblrCoreUserDashboardResponse : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCoreUserDashboardResponseCompanion *companion __attribute__((swift_name("companion")));
@property KtumblrKotlinArray<KtumblrCorePost *> * _Nullable posts __attribute__((swift_name("posts")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserDashboardRequest")))
@interface KtumblrCoreUserDashboardRequest : KtumblrBase <KtumblrCoreMapRequest>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KtumblrMutableDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property KtumblrInt * _Nullable limit __attribute__((swift_name("limit")));
@property KtumblrBoolean * _Nullable notesInfo __attribute__((swift_name("notesInfo")));
@property KtumblrBoolean * _Nullable npf __attribute__((swift_name("npf")));
@property KtumblrInt * _Nullable offset __attribute__((swift_name("offset")));
@property KtumblrBoolean * _Nullable reblogInfo __attribute__((swift_name("reblogInfo")));
@property KtumblrInt * _Nullable sinceId __attribute__((swift_name("sinceId")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserFollowingResponse")))
@interface KtumblrCoreUserFollowingResponse : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCoreUserFollowingResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blogs")
*/
@property KtumblrKotlinArray<KtumblrCoreBlog *> * _Nullable blogs __attribute__((swift_name("blogs")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="total_blogs")
*/
@property KtumblrInt * _Nullable totalBlog __attribute__((swift_name("totalBlog")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserFollowingRequest")))
@interface KtumblrCoreUserFollowingRequest : KtumblrBase <KtumblrCoreMapRequest>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KtumblrMutableDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property KtumblrInt * _Nullable limit __attribute__((swift_name("limit")));
@property KtumblrInt * _Nullable offset __attribute__((swift_name("offset")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserLikesResponse")))
@interface KtumblrCoreUserLikesResponse : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCoreUserLikesResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="liked_count")
*/
@property KtumblrInt * _Nullable likedCount __attribute__((swift_name("likedCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="liked_posts")
*/
@property KtumblrKotlinArray<KtumblrCorePost *> * _Nullable likedPosts __attribute__((swift_name("likedPosts")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserLikesRequest")))
@interface KtumblrCoreUserLikesRequest : KtumblrBase <KtumblrCoreMapRequest>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KtumblrMutableDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property KtumblrInt * _Nullable after __attribute__((swift_name("after")));
@property KtumblrInt * _Nullable before __attribute__((swift_name("before")));
@property KtumblrInt * _Nullable limit __attribute__((swift_name("limit")));
@property KtumblrInt * _Nullable offset __attribute__((swift_name("offset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAuthOAuth2TokenResponse.Companion")))
@interface KtumblrCoreAuthOAuth2TokenResponseCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreAuthOAuth2TokenResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogPostsResponse.Companion")))
@interface KtumblrCoreBlogPostsResponseCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreBlogPostsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("CoreResource")))
@interface KtumblrCoreResource : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlog")))
@interface KtumblrCoreBlog : KtumblrCoreResource
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCoreBlogCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ask_page_title")
*/
@property (readonly) NSString * _Nullable askPageTitle __attribute__((swift_name("askPageTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar")
*/
@property (readonly) KtumblrKotlinArray<KtumblrCoreBlogAvatar *> * _Nullable avatar __attribute__((swift_name("avatar")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="description")
*/
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="followers")
*/
@property (readonly) KtumblrInt * _Nullable followerCount __attribute__((swift_name("followerCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="admin")
*/
@property (readonly) KtumblrBoolean * _Nullable isAdmin __attribute__((swift_name("isAdmin")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ask")
*/
@property KtumblrBoolean * _Nullable isAsk __attribute__((swift_name("isAsk")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ask_anon")
*/
@property KtumblrBoolean * _Nullable isAskAnon __attribute__((swift_name("isAskAnon")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_blocked_from_primary")
*/
@property (readonly) KtumblrBoolean * _Nullable isBlockedFromPrimary __attribute__((swift_name("isBlockedFromPrimary")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="followed")
*/
@property KtumblrBoolean * _Nullable isFollowed __attribute__((swift_name("isFollowed")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_nsfw")
*/
@property (readonly) KtumblrBoolean * _Nullable isNSFW __attribute__((swift_name("isNSFW")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="primary")
*/
@property (readonly) KtumblrBoolean * _Nullable isPrimary __attribute__((swift_name("isPrimary")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="likes")
*/
@property (readonly) KtumblrInt * _Nullable likeCount __attribute__((swift_name("likeCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property NSString * _Nullable name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="posts")
*/
@property int32_t postCount __attribute__((swift_name("postCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="theme")
*/
@property (readonly) KtumblrCoreBlogTheme * _Nullable theme __attribute__((swift_name("theme")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property NSString * _Nullable title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="updated")
*/
@property KtumblrInt * _Nullable updated __attribute__((swift_name("updated")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBodyCompanion")))
@interface KtumblrCoreBodyCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(KtumblrKotlinArray<id<KtumblrKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<KtumblrKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMeta")))
@interface KtumblrCoreMeta : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCoreMetaCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable msg __attribute__((swift_name("msg")));
@property KtumblrInt * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogFollowersResponse.Companion")))
@interface KtumblrCoreBlogFollowersResponseCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreBlogFollowersResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollowerUser")))
@interface KtumblrCoreFollowerUser : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCoreFollowerUserCompanion *companion __attribute__((swift_name("companion")));
@property KtumblrBoolean * _Nullable following __attribute__((swift_name("following")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable updated __attribute__((swift_name("updated")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogFollowingResponse.Companion")))
@interface KtumblrCoreBlogFollowingResponseCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreBlogFollowingResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogInfoResponse.Companion")))
@interface KtumblrCoreBlogInfoResponseCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreBlogInfoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogLikesResponse.Companion")))
@interface KtumblrCoreBlogLikesResponseCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreBlogLikesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePost.Companion")))
@interface KtumblrCorePostCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCorePostCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLegacyAnswerPost")))
@interface KtumblrCoreLegacyAnswerPost : KtumblrCorePost
- (instancetype)initWithBlogName:(NSString * _Nullable)blogName idString:(NSString * _Nullable)idString genesisPostId:(NSString * _Nullable)genesisPostId postUrl:(NSString * _Nullable)postUrl parentPostUrl:(NSString * _Nullable)parentPostUrl type:(NSString * _Nullable)type timestamp:(KtumblrInt * _Nullable)timestamp date:(NSString * _Nullable)date format:(NSString * _Nullable)format reblogKey:(NSString * _Nullable)reblogKey tags:(KtumblrKotlinArray<NSString *> * _Nullable)tags isBookmarklet:(KtumblrBoolean * _Nullable)isBookmarklet isMobile:(KtumblrBoolean * _Nullable)isMobile sourceUrl:(NSString * _Nullable)sourceUrl sourceTitle:(NSString * _Nullable)sourceTitle isLiked:(KtumblrBoolean * _Nullable)isLiked state:(NSString * _Nullable)state title:(NSString * _Nullable)title body:(NSString * _Nullable)body noteCount:(KtumblrInt * _Nullable)noteCount summary:(NSString * _Nullable)summary slug:(NSString * _Nullable)slug rebloggedFromId:(NSString * _Nullable)rebloggedFromId rebloggedFromUrl:(NSString * _Nullable)rebloggedFromUrl rebloggedFromName:(NSString * _Nullable)rebloggedFromName rebloggedFromTitle:(NSString * _Nullable)rebloggedFromTitle rebloggedFromUuid:(NSString * _Nullable)rebloggedFromUuid rebloggedFromCanMessage:(KtumblrBoolean * _Nullable)rebloggedFromCanMessage rebloggedFromFollowing:(KtumblrBoolean * _Nullable)rebloggedFromFollowing rebloggedRootId:(NSString * _Nullable)rebloggedRootId rebloggedRootUrl:(NSString * _Nullable)rebloggedRootUrl rebloggedRootName:(NSString * _Nullable)rebloggedRootName rebloggedRootTitle:(NSString * _Nullable)rebloggedRootTitle rebloggedRootUuid:(NSString * _Nullable)rebloggedRootUuid rebloggedRootCanMessage:(KtumblrBoolean * _Nullable)rebloggedRootCanMessage rebloggedRootFollowing:(KtumblrBoolean * _Nullable)rebloggedRootFollowing notes:(KtumblrKotlinArray<KtumblrCoreNote *> * _Nullable)notes blog:(KtumblrCoreBlog * _Nullable)blog reblog:(KtumblrCoreReblog * _Nullable)reblog trail:(KtumblrKotlinArray<KtumblrCoreTrail *> * _Nullable)trail __attribute__((swift_name("init(blogName:idString:genesisPostId:postUrl:parentPostUrl:type:timestamp:date:format:reblogKey:tags:isBookmarklet:isMobile:sourceUrl:sourceTitle:isLiked:state:title:body:noteCount:summary:slug:rebloggedFromId:rebloggedFromUrl:rebloggedFromName:rebloggedFromTitle:rebloggedFromUuid:rebloggedFromCanMessage:rebloggedFromFollowing:rebloggedRootId:rebloggedRootUrl:rebloggedRootName:rebloggedRootTitle:rebloggedRootUuid:rebloggedRootCanMessage:rebloggedRootFollowing:notes:blog:reblog:trail:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KtumblrCoreLegacyAnswerPostCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="answer")
*/
@property (readonly) NSString * _Nullable answer __attribute__((swift_name("answer")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="asking_name")
*/
@property (readonly) NSString * _Nullable askingName __attribute__((swift_name("askingName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="asking_url")
*/
@property (readonly) NSString * _Nullable askingUrl __attribute__((swift_name("askingUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blog")
*/
@property (getter=blog_) KtumblrCoreBlog * _Nullable blog __attribute__((swift_name("blog")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blog_name")
*/
@property NSString * _Nullable blogName __attribute__((swift_name("blogName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="body")
*/
@property NSString * _Nullable body __attribute__((swift_name("body")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="date")
*/
@property NSString * _Nullable date __attribute__((swift_name("date")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="format")
*/
@property NSString * _Nullable format __attribute__((swift_name("format")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="genesis_post_id")
*/
@property NSString * _Nullable genesisPostId __attribute__((swift_name("genesisPostId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_string")
*/
@property NSString * _Nullable idString __attribute__((swift_name("idString")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bookmarklet")
*/
@property KtumblrBoolean * _Nullable isBookmarklet __attribute__((swift_name("isBookmarklet")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="liked")
*/
@property KtumblrBoolean * _Nullable isLiked __attribute__((swift_name("isLiked")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mobile")
*/
@property KtumblrBoolean * _Nullable isMobile __attribute__((swift_name("isMobile")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="note_count")
*/
@property KtumblrInt * _Nullable noteCount __attribute__((swift_name("noteCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="notes")
*/
@property KtumblrKotlinArray<KtumblrCoreNote *> * _Nullable notes __attribute__((swift_name("notes")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="parent_post_url")
*/
@property NSString * _Nullable parentPostUrl __attribute__((swift_name("parentPostUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="post_url")
*/
@property NSString * _Nullable postUrl __attribute__((swift_name("postUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="question")
*/
@property (readonly) NSString * _Nullable question __attribute__((swift_name("question")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblog")
*/
@property KtumblrCoreReblog * _Nullable reblog __attribute__((swift_name("reblog")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblog_key")
*/
@property NSString * _Nullable reblogKey __attribute__((swift_name("reblogKey")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_can_message")
*/
@property KtumblrBoolean * _Nullable rebloggedFromCanMessage __attribute__((swift_name("rebloggedFromCanMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_following")
*/
@property KtumblrBoolean * _Nullable rebloggedFromFollowing __attribute__((swift_name("rebloggedFromFollowing")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_id")
*/
@property NSString * _Nullable rebloggedFromId __attribute__((swift_name("rebloggedFromId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_name")
*/
@property NSString * _Nullable rebloggedFromName __attribute__((swift_name("rebloggedFromName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_title")
*/
@property NSString * _Nullable rebloggedFromTitle __attribute__((swift_name("rebloggedFromTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_url")
*/
@property NSString * _Nullable rebloggedFromUrl __attribute__((swift_name("rebloggedFromUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_uuid")
*/
@property NSString * _Nullable rebloggedFromUuid __attribute__((swift_name("rebloggedFromUuid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_can_message")
*/
@property KtumblrBoolean * _Nullable rebloggedRootCanMessage __attribute__((swift_name("rebloggedRootCanMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_following")
*/
@property KtumblrBoolean * _Nullable rebloggedRootFollowing __attribute__((swift_name("rebloggedRootFollowing")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_id")
*/
@property NSString * _Nullable rebloggedRootId __attribute__((swift_name("rebloggedRootId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_name")
*/
@property NSString * _Nullable rebloggedRootName __attribute__((swift_name("rebloggedRootName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_title")
*/
@property NSString * _Nullable rebloggedRootTitle __attribute__((swift_name("rebloggedRootTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_url")
*/
@property NSString * _Nullable rebloggedRootUrl __attribute__((swift_name("rebloggedRootUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_uuid")
*/
@property NSString * _Nullable rebloggedRootUuid __attribute__((swift_name("rebloggedRootUuid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="slug")
*/
@property NSString * _Nullable slug __attribute__((swift_name("slug")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="source_title")
*/
@property NSString * _Nullable sourceTitle __attribute__((swift_name("sourceTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="source_url")
*/
@property NSString * _Nullable sourceUrl __attribute__((swift_name("sourceUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="state")
*/
@property NSString * _Nullable state __attribute__((swift_name("state")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="summary")
*/
@property NSString * _Nullable summary __attribute__((swift_name("summary")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tags")
*/
@property KtumblrKotlinArray<NSString *> * _Nullable tags __attribute__((swift_name("tags")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="timestamp")
*/
@property KtumblrInt * _Nullable timestamp __attribute__((swift_name("timestamp")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property NSString * _Nullable title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="trail")
*/
@property KtumblrKotlinArray<KtumblrCoreTrail *> * _Nullable trail __attribute__((swift_name("trail")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLegacyLinkPost")))
@interface KtumblrCoreLegacyLinkPost : KtumblrCorePost
- (instancetype)initWithBlogName:(NSString * _Nullable)blogName idString:(NSString * _Nullable)idString genesisPostId:(NSString * _Nullable)genesisPostId postUrl:(NSString * _Nullable)postUrl parentPostUrl:(NSString * _Nullable)parentPostUrl type:(NSString * _Nullable)type timestamp:(KtumblrInt * _Nullable)timestamp date:(NSString * _Nullable)date format:(NSString * _Nullable)format reblogKey:(NSString * _Nullable)reblogKey tags:(KtumblrKotlinArray<NSString *> * _Nullable)tags isBookmarklet:(KtumblrBoolean * _Nullable)isBookmarklet isMobile:(KtumblrBoolean * _Nullable)isMobile sourceUrl:(NSString * _Nullable)sourceUrl sourceTitle:(NSString * _Nullable)sourceTitle isLiked:(KtumblrBoolean * _Nullable)isLiked state:(NSString * _Nullable)state title:(NSString * _Nullable)title body:(NSString * _Nullable)body noteCount:(KtumblrInt * _Nullable)noteCount summary:(NSString * _Nullable)summary slug:(NSString * _Nullable)slug rebloggedFromId:(NSString * _Nullable)rebloggedFromId rebloggedFromUrl:(NSString * _Nullable)rebloggedFromUrl rebloggedFromName:(NSString * _Nullable)rebloggedFromName rebloggedFromTitle:(NSString * _Nullable)rebloggedFromTitle rebloggedFromUuid:(NSString * _Nullable)rebloggedFromUuid rebloggedFromCanMessage:(KtumblrBoolean * _Nullable)rebloggedFromCanMessage rebloggedFromFollowing:(KtumblrBoolean * _Nullable)rebloggedFromFollowing rebloggedRootId:(NSString * _Nullable)rebloggedRootId rebloggedRootUrl:(NSString * _Nullable)rebloggedRootUrl rebloggedRootName:(NSString * _Nullable)rebloggedRootName rebloggedRootTitle:(NSString * _Nullable)rebloggedRootTitle rebloggedRootUuid:(NSString * _Nullable)rebloggedRootUuid rebloggedRootCanMessage:(KtumblrBoolean * _Nullable)rebloggedRootCanMessage rebloggedRootFollowing:(KtumblrBoolean * _Nullable)rebloggedRootFollowing notes:(KtumblrKotlinArray<KtumblrCoreNote *> * _Nullable)notes blog:(KtumblrCoreBlog * _Nullable)blog reblog:(KtumblrCoreReblog * _Nullable)reblog trail:(KtumblrKotlinArray<KtumblrCoreTrail *> * _Nullable)trail __attribute__((swift_name("init(blogName:idString:genesisPostId:postUrl:parentPostUrl:type:timestamp:date:format:reblogKey:tags:isBookmarklet:isMobile:sourceUrl:sourceTitle:isLiked:state:title:body:noteCount:summary:slug:rebloggedFromId:rebloggedFromUrl:rebloggedFromName:rebloggedFromTitle:rebloggedFromUuid:rebloggedFromCanMessage:rebloggedFromFollowing:rebloggedRootId:rebloggedRootUrl:rebloggedRootName:rebloggedRootTitle:rebloggedRootUuid:rebloggedRootCanMessage:rebloggedRootFollowing:notes:blog:reblog:trail:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KtumblrCoreLegacyLinkPostCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blog")
*/
@property (getter=blog_) KtumblrCoreBlog * _Nullable blog __attribute__((swift_name("blog")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blog_name")
*/
@property NSString * _Nullable blogName __attribute__((swift_name("blogName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="body")
*/
@property NSString * _Nullable body __attribute__((swift_name("body")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="date")
*/
@property NSString * _Nullable date __attribute__((swift_name("date")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="description")
*/
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="excerpt")
*/
@property NSString * _Nullable excerpt __attribute__((swift_name("excerpt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="format")
*/
@property NSString * _Nullable format __attribute__((swift_name("format")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="genesis_post_id")
*/
@property NSString * _Nullable genesisPostId __attribute__((swift_name("genesisPostId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_string")
*/
@property NSString * _Nullable idString __attribute__((swift_name("idString")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bookmarklet")
*/
@property KtumblrBoolean * _Nullable isBookmarklet __attribute__((swift_name("isBookmarklet")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="liked")
*/
@property KtumblrBoolean * _Nullable isLiked __attribute__((swift_name("isLiked")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mobile")
*/
@property KtumblrBoolean * _Nullable isMobile __attribute__((swift_name("isMobile")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="link_author")
*/
@property NSString * _Nullable linkAuthor __attribute__((swift_name("linkAuthor")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="note_count")
*/
@property KtumblrInt * _Nullable noteCount __attribute__((swift_name("noteCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="notes")
*/
@property KtumblrKotlinArray<KtumblrCoreNote *> * _Nullable notes __attribute__((swift_name("notes")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="parent_post_url")
*/
@property NSString * _Nullable parentPostUrl __attribute__((swift_name("parentPostUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="post_url")
*/
@property NSString * _Nullable postUrl __attribute__((swift_name("postUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="publisher")
*/
@property NSString * _Nullable publisher __attribute__((swift_name("publisher")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblog")
*/
@property KtumblrCoreReblog * _Nullable reblog __attribute__((swift_name("reblog")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblog_key")
*/
@property NSString * _Nullable reblogKey __attribute__((swift_name("reblogKey")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_can_message")
*/
@property KtumblrBoolean * _Nullable rebloggedFromCanMessage __attribute__((swift_name("rebloggedFromCanMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_following")
*/
@property KtumblrBoolean * _Nullable rebloggedFromFollowing __attribute__((swift_name("rebloggedFromFollowing")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_id")
*/
@property NSString * _Nullable rebloggedFromId __attribute__((swift_name("rebloggedFromId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_name")
*/
@property NSString * _Nullable rebloggedFromName __attribute__((swift_name("rebloggedFromName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_title")
*/
@property NSString * _Nullable rebloggedFromTitle __attribute__((swift_name("rebloggedFromTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_url")
*/
@property NSString * _Nullable rebloggedFromUrl __attribute__((swift_name("rebloggedFromUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_uuid")
*/
@property NSString * _Nullable rebloggedFromUuid __attribute__((swift_name("rebloggedFromUuid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_can_message")
*/
@property KtumblrBoolean * _Nullable rebloggedRootCanMessage __attribute__((swift_name("rebloggedRootCanMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_following")
*/
@property KtumblrBoolean * _Nullable rebloggedRootFollowing __attribute__((swift_name("rebloggedRootFollowing")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_id")
*/
@property NSString * _Nullable rebloggedRootId __attribute__((swift_name("rebloggedRootId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_name")
*/
@property NSString * _Nullable rebloggedRootName __attribute__((swift_name("rebloggedRootName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_title")
*/
@property NSString * _Nullable rebloggedRootTitle __attribute__((swift_name("rebloggedRootTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_url")
*/
@property NSString * _Nullable rebloggedRootUrl __attribute__((swift_name("rebloggedRootUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_uuid")
*/
@property NSString * _Nullable rebloggedRootUuid __attribute__((swift_name("rebloggedRootUuid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="slug")
*/
@property NSString * _Nullable slug __attribute__((swift_name("slug")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="source_title")
*/
@property NSString * _Nullable sourceTitle __attribute__((swift_name("sourceTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="source_url")
*/
@property NSString * _Nullable sourceUrl __attribute__((swift_name("sourceUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="state")
*/
@property NSString * _Nullable state __attribute__((swift_name("state")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="summary")
*/
@property NSString * _Nullable summary __attribute__((swift_name("summary")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tags")
*/
@property KtumblrKotlinArray<NSString *> * _Nullable tags __attribute__((swift_name("tags")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="timestamp")
*/
@property KtumblrInt * _Nullable timestamp __attribute__((swift_name("timestamp")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property NSString * _Nullable title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="trail")
*/
@property KtumblrKotlinArray<KtumblrCoreTrail *> * _Nullable trail __attribute__((swift_name("trail")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property NSString * _Nullable type __attribute__((swift_name("type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLegacyPhotoPost")))
@interface KtumblrCoreLegacyPhotoPost : KtumblrCorePost
- (instancetype)initWithBlogName:(NSString * _Nullable)blogName idString:(NSString * _Nullable)idString genesisPostId:(NSString * _Nullable)genesisPostId postUrl:(NSString * _Nullable)postUrl parentPostUrl:(NSString * _Nullable)parentPostUrl type:(NSString * _Nullable)type timestamp:(KtumblrInt * _Nullable)timestamp date:(NSString * _Nullable)date format:(NSString * _Nullable)format reblogKey:(NSString * _Nullable)reblogKey tags:(KtumblrKotlinArray<NSString *> * _Nullable)tags isBookmarklet:(KtumblrBoolean * _Nullable)isBookmarklet isMobile:(KtumblrBoolean * _Nullable)isMobile sourceUrl:(NSString * _Nullable)sourceUrl sourceTitle:(NSString * _Nullable)sourceTitle isLiked:(KtumblrBoolean * _Nullable)isLiked state:(NSString * _Nullable)state title:(NSString * _Nullable)title body:(NSString * _Nullable)body noteCount:(KtumblrInt * _Nullable)noteCount summary:(NSString * _Nullable)summary slug:(NSString * _Nullable)slug rebloggedFromId:(NSString * _Nullable)rebloggedFromId rebloggedFromUrl:(NSString * _Nullable)rebloggedFromUrl rebloggedFromName:(NSString * _Nullable)rebloggedFromName rebloggedFromTitle:(NSString * _Nullable)rebloggedFromTitle rebloggedFromUuid:(NSString * _Nullable)rebloggedFromUuid rebloggedFromCanMessage:(KtumblrBoolean * _Nullable)rebloggedFromCanMessage rebloggedFromFollowing:(KtumblrBoolean * _Nullable)rebloggedFromFollowing rebloggedRootId:(NSString * _Nullable)rebloggedRootId rebloggedRootUrl:(NSString * _Nullable)rebloggedRootUrl rebloggedRootName:(NSString * _Nullable)rebloggedRootName rebloggedRootTitle:(NSString * _Nullable)rebloggedRootTitle rebloggedRootUuid:(NSString * _Nullable)rebloggedRootUuid rebloggedRootCanMessage:(KtumblrBoolean * _Nullable)rebloggedRootCanMessage rebloggedRootFollowing:(KtumblrBoolean * _Nullable)rebloggedRootFollowing notes:(KtumblrKotlinArray<KtumblrCoreNote *> * _Nullable)notes blog:(KtumblrCoreBlog * _Nullable)blog reblog:(KtumblrCoreReblog * _Nullable)reblog trail:(KtumblrKotlinArray<KtumblrCoreTrail *> * _Nullable)trail __attribute__((swift_name("init(blogName:idString:genesisPostId:postUrl:parentPostUrl:type:timestamp:date:format:reblogKey:tags:isBookmarklet:isMobile:sourceUrl:sourceTitle:isLiked:state:title:body:noteCount:summary:slug:rebloggedFromId:rebloggedFromUrl:rebloggedFromName:rebloggedFromTitle:rebloggedFromUuid:rebloggedFromCanMessage:rebloggedFromFollowing:rebloggedRootId:rebloggedRootUrl:rebloggedRootName:rebloggedRootTitle:rebloggedRootUuid:rebloggedRootCanMessage:rebloggedRootFollowing:notes:blog:reblog:trail:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KtumblrCoreLegacyPhotoPostCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blog")
*/
@property (getter=blog_) KtumblrCoreBlog * _Nullable blog __attribute__((swift_name("blog")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blog_name")
*/
@property NSString * _Nullable blogName __attribute__((swift_name("blogName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="body")
*/
@property NSString * _Nullable body __attribute__((swift_name("body")));
@property NSString * _Nullable caption __attribute__((swift_name("caption")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="date")
*/
@property NSString * _Nullable date __attribute__((swift_name("date")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="format")
*/
@property NSString * _Nullable format __attribute__((swift_name("format")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="genesis_post_id")
*/
@property NSString * _Nullable genesisPostId __attribute__((swift_name("genesisPostId")));
@property KtumblrInt * _Nullable height __attribute__((swift_name("height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_string")
*/
@property NSString * _Nullable idString __attribute__((swift_name("idString")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bookmarklet")
*/
@property KtumblrBoolean * _Nullable isBookmarklet __attribute__((swift_name("isBookmarklet")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="liked")
*/
@property KtumblrBoolean * _Nullable isLiked __attribute__((swift_name("isLiked")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mobile")
*/
@property KtumblrBoolean * _Nullable isMobile __attribute__((swift_name("isMobile")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="note_count")
*/
@property KtumblrInt * _Nullable noteCount __attribute__((swift_name("noteCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="notes")
*/
@property KtumblrKotlinArray<KtumblrCoreNote *> * _Nullable notes __attribute__((swift_name("notes")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="parent_post_url")
*/
@property NSString * _Nullable parentPostUrl __attribute__((swift_name("parentPostUrl")));
@property KtumblrKotlinArray<KtumblrCorePhoto *> * _Nullable photos __attribute__((swift_name("photos")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="post_url")
*/
@property NSString * _Nullable postUrl __attribute__((swift_name("postUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblog")
*/
@property KtumblrCoreReblog * _Nullable reblog __attribute__((swift_name("reblog")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblog_key")
*/
@property NSString * _Nullable reblogKey __attribute__((swift_name("reblogKey")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_can_message")
*/
@property KtumblrBoolean * _Nullable rebloggedFromCanMessage __attribute__((swift_name("rebloggedFromCanMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_following")
*/
@property KtumblrBoolean * _Nullable rebloggedFromFollowing __attribute__((swift_name("rebloggedFromFollowing")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_id")
*/
@property NSString * _Nullable rebloggedFromId __attribute__((swift_name("rebloggedFromId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_name")
*/
@property NSString * _Nullable rebloggedFromName __attribute__((swift_name("rebloggedFromName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_title")
*/
@property NSString * _Nullable rebloggedFromTitle __attribute__((swift_name("rebloggedFromTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_url")
*/
@property NSString * _Nullable rebloggedFromUrl __attribute__((swift_name("rebloggedFromUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_uuid")
*/
@property NSString * _Nullable rebloggedFromUuid __attribute__((swift_name("rebloggedFromUuid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_can_message")
*/
@property KtumblrBoolean * _Nullable rebloggedRootCanMessage __attribute__((swift_name("rebloggedRootCanMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_following")
*/
@property KtumblrBoolean * _Nullable rebloggedRootFollowing __attribute__((swift_name("rebloggedRootFollowing")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_id")
*/
@property NSString * _Nullable rebloggedRootId __attribute__((swift_name("rebloggedRootId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_name")
*/
@property NSString * _Nullable rebloggedRootName __attribute__((swift_name("rebloggedRootName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_title")
*/
@property NSString * _Nullable rebloggedRootTitle __attribute__((swift_name("rebloggedRootTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_url")
*/
@property NSString * _Nullable rebloggedRootUrl __attribute__((swift_name("rebloggedRootUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_uuid")
*/
@property NSString * _Nullable rebloggedRootUuid __attribute__((swift_name("rebloggedRootUuid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="slug")
*/
@property NSString * _Nullable slug __attribute__((swift_name("slug")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="source_title")
*/
@property NSString * _Nullable sourceTitle __attribute__((swift_name("sourceTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="source_url")
*/
@property NSString * _Nullable sourceUrl __attribute__((swift_name("sourceUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="state")
*/
@property NSString * _Nullable state __attribute__((swift_name("state")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="summary")
*/
@property NSString * _Nullable summary __attribute__((swift_name("summary")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tags")
*/
@property KtumblrKotlinArray<NSString *> * _Nullable tags __attribute__((swift_name("tags")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="timestamp")
*/
@property KtumblrInt * _Nullable timestamp __attribute__((swift_name("timestamp")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property NSString * _Nullable title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="trail")
*/
@property KtumblrKotlinArray<KtumblrCoreTrail *> * _Nullable trail __attribute__((swift_name("trail")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property NSString * _Nullable type __attribute__((swift_name("type")));
@property KtumblrInt * _Nullable width __attribute__((swift_name("width")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLegacyQuotePost")))
@interface KtumblrCoreLegacyQuotePost : KtumblrCorePost
- (instancetype)initWithBlogName:(NSString * _Nullable)blogName idString:(NSString * _Nullable)idString genesisPostId:(NSString * _Nullable)genesisPostId postUrl:(NSString * _Nullable)postUrl parentPostUrl:(NSString * _Nullable)parentPostUrl type:(NSString * _Nullable)type timestamp:(KtumblrInt * _Nullable)timestamp date:(NSString * _Nullable)date format:(NSString * _Nullable)format reblogKey:(NSString * _Nullable)reblogKey tags:(KtumblrKotlinArray<NSString *> * _Nullable)tags isBookmarklet:(KtumblrBoolean * _Nullable)isBookmarklet isMobile:(KtumblrBoolean * _Nullable)isMobile sourceUrl:(NSString * _Nullable)sourceUrl sourceTitle:(NSString * _Nullable)sourceTitle isLiked:(KtumblrBoolean * _Nullable)isLiked state:(NSString * _Nullable)state title:(NSString * _Nullable)title body:(NSString * _Nullable)body noteCount:(KtumblrInt * _Nullable)noteCount summary:(NSString * _Nullable)summary slug:(NSString * _Nullable)slug rebloggedFromId:(NSString * _Nullable)rebloggedFromId rebloggedFromUrl:(NSString * _Nullable)rebloggedFromUrl rebloggedFromName:(NSString * _Nullable)rebloggedFromName rebloggedFromTitle:(NSString * _Nullable)rebloggedFromTitle rebloggedFromUuid:(NSString * _Nullable)rebloggedFromUuid rebloggedFromCanMessage:(KtumblrBoolean * _Nullable)rebloggedFromCanMessage rebloggedFromFollowing:(KtumblrBoolean * _Nullable)rebloggedFromFollowing rebloggedRootId:(NSString * _Nullable)rebloggedRootId rebloggedRootUrl:(NSString * _Nullable)rebloggedRootUrl rebloggedRootName:(NSString * _Nullable)rebloggedRootName rebloggedRootTitle:(NSString * _Nullable)rebloggedRootTitle rebloggedRootUuid:(NSString * _Nullable)rebloggedRootUuid rebloggedRootCanMessage:(KtumblrBoolean * _Nullable)rebloggedRootCanMessage rebloggedRootFollowing:(KtumblrBoolean * _Nullable)rebloggedRootFollowing notes:(KtumblrKotlinArray<KtumblrCoreNote *> * _Nullable)notes blog:(KtumblrCoreBlog * _Nullable)blog reblog:(KtumblrCoreReblog * _Nullable)reblog trail:(KtumblrKotlinArray<KtumblrCoreTrail *> * _Nullable)trail __attribute__((swift_name("init(blogName:idString:genesisPostId:postUrl:parentPostUrl:type:timestamp:date:format:reblogKey:tags:isBookmarklet:isMobile:sourceUrl:sourceTitle:isLiked:state:title:body:noteCount:summary:slug:rebloggedFromId:rebloggedFromUrl:rebloggedFromName:rebloggedFromTitle:rebloggedFromUuid:rebloggedFromCanMessage:rebloggedFromFollowing:rebloggedRootId:rebloggedRootUrl:rebloggedRootName:rebloggedRootTitle:rebloggedRootUuid:rebloggedRootCanMessage:rebloggedRootFollowing:notes:blog:reblog:trail:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KtumblrCoreLegacyQuotePostCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blog")
*/
@property (getter=blog_) KtumblrCoreBlog * _Nullable blog __attribute__((swift_name("blog")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blog_name")
*/
@property NSString * _Nullable blogName __attribute__((swift_name("blogName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="body")
*/
@property NSString * _Nullable body __attribute__((swift_name("body")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="date")
*/
@property NSString * _Nullable date __attribute__((swift_name("date")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="format")
*/
@property NSString * _Nullable format __attribute__((swift_name("format")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="genesis_post_id")
*/
@property NSString * _Nullable genesisPostId __attribute__((swift_name("genesisPostId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_string")
*/
@property NSString * _Nullable idString __attribute__((swift_name("idString")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bookmarklet")
*/
@property KtumblrBoolean * _Nullable isBookmarklet __attribute__((swift_name("isBookmarklet")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="liked")
*/
@property KtumblrBoolean * _Nullable isLiked __attribute__((swift_name("isLiked")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mobile")
*/
@property KtumblrBoolean * _Nullable isMobile __attribute__((swift_name("isMobile")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="note_count")
*/
@property KtumblrInt * _Nullable noteCount __attribute__((swift_name("noteCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="notes")
*/
@property KtumblrKotlinArray<KtumblrCoreNote *> * _Nullable notes __attribute__((swift_name("notes")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="parent_post_url")
*/
@property NSString * _Nullable parentPostUrl __attribute__((swift_name("parentPostUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="post_url")
*/
@property NSString * _Nullable postUrl __attribute__((swift_name("postUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblog")
*/
@property KtumblrCoreReblog * _Nullable reblog __attribute__((swift_name("reblog")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblog_key")
*/
@property NSString * _Nullable reblogKey __attribute__((swift_name("reblogKey")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_can_message")
*/
@property KtumblrBoolean * _Nullable rebloggedFromCanMessage __attribute__((swift_name("rebloggedFromCanMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_following")
*/
@property KtumblrBoolean * _Nullable rebloggedFromFollowing __attribute__((swift_name("rebloggedFromFollowing")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_id")
*/
@property NSString * _Nullable rebloggedFromId __attribute__((swift_name("rebloggedFromId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_name")
*/
@property NSString * _Nullable rebloggedFromName __attribute__((swift_name("rebloggedFromName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_title")
*/
@property NSString * _Nullable rebloggedFromTitle __attribute__((swift_name("rebloggedFromTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_url")
*/
@property NSString * _Nullable rebloggedFromUrl __attribute__((swift_name("rebloggedFromUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_uuid")
*/
@property NSString * _Nullable rebloggedFromUuid __attribute__((swift_name("rebloggedFromUuid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_can_message")
*/
@property KtumblrBoolean * _Nullable rebloggedRootCanMessage __attribute__((swift_name("rebloggedRootCanMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_following")
*/
@property KtumblrBoolean * _Nullable rebloggedRootFollowing __attribute__((swift_name("rebloggedRootFollowing")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_id")
*/
@property NSString * _Nullable rebloggedRootId __attribute__((swift_name("rebloggedRootId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_name")
*/
@property NSString * _Nullable rebloggedRootName __attribute__((swift_name("rebloggedRootName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_title")
*/
@property NSString * _Nullable rebloggedRootTitle __attribute__((swift_name("rebloggedRootTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_url")
*/
@property NSString * _Nullable rebloggedRootUrl __attribute__((swift_name("rebloggedRootUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_uuid")
*/
@property NSString * _Nullable rebloggedRootUuid __attribute__((swift_name("rebloggedRootUuid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="slug")
*/
@property NSString * _Nullable slug __attribute__((swift_name("slug")));
@property NSString * _Nullable source __attribute__((swift_name("source")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="source_title")
*/
@property NSString * _Nullable sourceTitle __attribute__((swift_name("sourceTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="source_url")
*/
@property NSString * _Nullable sourceUrl __attribute__((swift_name("sourceUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="state")
*/
@property NSString * _Nullable state __attribute__((swift_name("state")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="summary")
*/
@property NSString * _Nullable summary __attribute__((swift_name("summary")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tags")
*/
@property KtumblrKotlinArray<NSString *> * _Nullable tags __attribute__((swift_name("tags")));
@property NSString * _Nullable text __attribute__((swift_name("text")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="timestamp")
*/
@property KtumblrInt * _Nullable timestamp __attribute__((swift_name("timestamp")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property NSString * _Nullable title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="trail")
*/
@property KtumblrKotlinArray<KtumblrCoreTrail *> * _Nullable trail __attribute__((swift_name("trail")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLegacyTextPost")))
@interface KtumblrCoreLegacyTextPost : KtumblrCorePost
- (instancetype)initWithBlogName:(NSString * _Nullable)blogName idString:(NSString * _Nullable)idString genesisPostId:(NSString * _Nullable)genesisPostId postUrl:(NSString * _Nullable)postUrl parentPostUrl:(NSString * _Nullable)parentPostUrl type:(NSString * _Nullable)type timestamp:(KtumblrInt * _Nullable)timestamp date:(NSString * _Nullable)date format:(NSString * _Nullable)format reblogKey:(NSString * _Nullable)reblogKey tags:(KtumblrKotlinArray<NSString *> * _Nullable)tags isBookmarklet:(KtumblrBoolean * _Nullable)isBookmarklet isMobile:(KtumblrBoolean * _Nullable)isMobile sourceUrl:(NSString * _Nullable)sourceUrl sourceTitle:(NSString * _Nullable)sourceTitle isLiked:(KtumblrBoolean * _Nullable)isLiked state:(NSString * _Nullable)state title:(NSString * _Nullable)title body:(NSString * _Nullable)body noteCount:(KtumblrInt * _Nullable)noteCount summary:(NSString * _Nullable)summary slug:(NSString * _Nullable)slug rebloggedFromId:(NSString * _Nullable)rebloggedFromId rebloggedFromUrl:(NSString * _Nullable)rebloggedFromUrl rebloggedFromName:(NSString * _Nullable)rebloggedFromName rebloggedFromTitle:(NSString * _Nullable)rebloggedFromTitle rebloggedFromUuid:(NSString * _Nullable)rebloggedFromUuid rebloggedFromCanMessage:(KtumblrBoolean * _Nullable)rebloggedFromCanMessage rebloggedFromFollowing:(KtumblrBoolean * _Nullable)rebloggedFromFollowing rebloggedRootId:(NSString * _Nullable)rebloggedRootId rebloggedRootUrl:(NSString * _Nullable)rebloggedRootUrl rebloggedRootName:(NSString * _Nullable)rebloggedRootName rebloggedRootTitle:(NSString * _Nullable)rebloggedRootTitle rebloggedRootUuid:(NSString * _Nullable)rebloggedRootUuid rebloggedRootCanMessage:(KtumblrBoolean * _Nullable)rebloggedRootCanMessage rebloggedRootFollowing:(KtumblrBoolean * _Nullable)rebloggedRootFollowing notes:(KtumblrKotlinArray<KtumblrCoreNote *> * _Nullable)notes blog:(KtumblrCoreBlog * _Nullable)blog reblog:(KtumblrCoreReblog * _Nullable)reblog trail:(KtumblrKotlinArray<KtumblrCoreTrail *> * _Nullable)trail __attribute__((swift_name("init(blogName:idString:genesisPostId:postUrl:parentPostUrl:type:timestamp:date:format:reblogKey:tags:isBookmarklet:isMobile:sourceUrl:sourceTitle:isLiked:state:title:body:noteCount:summary:slug:rebloggedFromId:rebloggedFromUrl:rebloggedFromName:rebloggedFromTitle:rebloggedFromUuid:rebloggedFromCanMessage:rebloggedFromFollowing:rebloggedRootId:rebloggedRootUrl:rebloggedRootName:rebloggedRootTitle:rebloggedRootUuid:rebloggedRootCanMessage:rebloggedRootFollowing:notes:blog:reblog:trail:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KtumblrCoreLegacyTextPostCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blog")
*/
@property (getter=blog_) KtumblrCoreBlog * _Nullable blog __attribute__((swift_name("blog")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blog_name")
*/
@property NSString * _Nullable blogName __attribute__((swift_name("blogName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="body")
*/
@property NSString * _Nullable body __attribute__((swift_name("body")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="date")
*/
@property NSString * _Nullable date __attribute__((swift_name("date")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="format")
*/
@property NSString * _Nullable format __attribute__((swift_name("format")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="genesis_post_id")
*/
@property NSString * _Nullable genesisPostId __attribute__((swift_name("genesisPostId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_string")
*/
@property NSString * _Nullable idString __attribute__((swift_name("idString")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bookmarklet")
*/
@property KtumblrBoolean * _Nullable isBookmarklet __attribute__((swift_name("isBookmarklet")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="liked")
*/
@property KtumblrBoolean * _Nullable isLiked __attribute__((swift_name("isLiked")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mobile")
*/
@property KtumblrBoolean * _Nullable isMobile __attribute__((swift_name("isMobile")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="note_count")
*/
@property KtumblrInt * _Nullable noteCount __attribute__((swift_name("noteCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="notes")
*/
@property KtumblrKotlinArray<KtumblrCoreNote *> * _Nullable notes __attribute__((swift_name("notes")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="parent_post_url")
*/
@property NSString * _Nullable parentPostUrl __attribute__((swift_name("parentPostUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="post_url")
*/
@property NSString * _Nullable postUrl __attribute__((swift_name("postUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblog")
*/
@property KtumblrCoreReblog * _Nullable reblog __attribute__((swift_name("reblog")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblog_key")
*/
@property NSString * _Nullable reblogKey __attribute__((swift_name("reblogKey")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_can_message")
*/
@property KtumblrBoolean * _Nullable rebloggedFromCanMessage __attribute__((swift_name("rebloggedFromCanMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_following")
*/
@property KtumblrBoolean * _Nullable rebloggedFromFollowing __attribute__((swift_name("rebloggedFromFollowing")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_id")
*/
@property NSString * _Nullable rebloggedFromId __attribute__((swift_name("rebloggedFromId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_name")
*/
@property NSString * _Nullable rebloggedFromName __attribute__((swift_name("rebloggedFromName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_title")
*/
@property NSString * _Nullable rebloggedFromTitle __attribute__((swift_name("rebloggedFromTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_url")
*/
@property NSString * _Nullable rebloggedFromUrl __attribute__((swift_name("rebloggedFromUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_uuid")
*/
@property NSString * _Nullable rebloggedFromUuid __attribute__((swift_name("rebloggedFromUuid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_can_message")
*/
@property KtumblrBoolean * _Nullable rebloggedRootCanMessage __attribute__((swift_name("rebloggedRootCanMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_following")
*/
@property KtumblrBoolean * _Nullable rebloggedRootFollowing __attribute__((swift_name("rebloggedRootFollowing")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_id")
*/
@property NSString * _Nullable rebloggedRootId __attribute__((swift_name("rebloggedRootId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_name")
*/
@property NSString * _Nullable rebloggedRootName __attribute__((swift_name("rebloggedRootName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_title")
*/
@property NSString * _Nullable rebloggedRootTitle __attribute__((swift_name("rebloggedRootTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_url")
*/
@property NSString * _Nullable rebloggedRootUrl __attribute__((swift_name("rebloggedRootUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_uuid")
*/
@property NSString * _Nullable rebloggedRootUuid __attribute__((swift_name("rebloggedRootUuid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="slug")
*/
@property NSString * _Nullable slug __attribute__((swift_name("slug")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="source_title")
*/
@property NSString * _Nullable sourceTitle __attribute__((swift_name("sourceTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="source_url")
*/
@property NSString * _Nullable sourceUrl __attribute__((swift_name("sourceUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="state")
*/
@property NSString * _Nullable state __attribute__((swift_name("state")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="summary")
*/
@property NSString * _Nullable summary __attribute__((swift_name("summary")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tags")
*/
@property KtumblrKotlinArray<NSString *> * _Nullable tags __attribute__((swift_name("tags")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="timestamp")
*/
@property KtumblrInt * _Nullable timestamp __attribute__((swift_name("timestamp")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property NSString * _Nullable title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="trail")
*/
@property KtumblrKotlinArray<KtumblrCoreTrail *> * _Nullable trail __attribute__((swift_name("trail")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLegacyVideoPost")))
@interface KtumblrCoreLegacyVideoPost : KtumblrCorePost
- (instancetype)initWithBlogName:(NSString * _Nullable)blogName idString:(NSString * _Nullable)idString genesisPostId:(NSString * _Nullable)genesisPostId postUrl:(NSString * _Nullable)postUrl parentPostUrl:(NSString * _Nullable)parentPostUrl type:(NSString * _Nullable)type timestamp:(KtumblrInt * _Nullable)timestamp date:(NSString * _Nullable)date format:(NSString * _Nullable)format reblogKey:(NSString * _Nullable)reblogKey tags:(KtumblrKotlinArray<NSString *> * _Nullable)tags isBookmarklet:(KtumblrBoolean * _Nullable)isBookmarklet isMobile:(KtumblrBoolean * _Nullable)isMobile sourceUrl:(NSString * _Nullable)sourceUrl sourceTitle:(NSString * _Nullable)sourceTitle isLiked:(KtumblrBoolean * _Nullable)isLiked state:(NSString * _Nullable)state title:(NSString * _Nullable)title body:(NSString * _Nullable)body noteCount:(KtumblrInt * _Nullable)noteCount summary:(NSString * _Nullable)summary slug:(NSString * _Nullable)slug rebloggedFromId:(NSString * _Nullable)rebloggedFromId rebloggedFromUrl:(NSString * _Nullable)rebloggedFromUrl rebloggedFromName:(NSString * _Nullable)rebloggedFromName rebloggedFromTitle:(NSString * _Nullable)rebloggedFromTitle rebloggedFromUuid:(NSString * _Nullable)rebloggedFromUuid rebloggedFromCanMessage:(KtumblrBoolean * _Nullable)rebloggedFromCanMessage rebloggedFromFollowing:(KtumblrBoolean * _Nullable)rebloggedFromFollowing rebloggedRootId:(NSString * _Nullable)rebloggedRootId rebloggedRootUrl:(NSString * _Nullable)rebloggedRootUrl rebloggedRootName:(NSString * _Nullable)rebloggedRootName rebloggedRootTitle:(NSString * _Nullable)rebloggedRootTitle rebloggedRootUuid:(NSString * _Nullable)rebloggedRootUuid rebloggedRootCanMessage:(KtumblrBoolean * _Nullable)rebloggedRootCanMessage rebloggedRootFollowing:(KtumblrBoolean * _Nullable)rebloggedRootFollowing notes:(KtumblrKotlinArray<KtumblrCoreNote *> * _Nullable)notes blog:(KtumblrCoreBlog * _Nullable)blog reblog:(KtumblrCoreReblog * _Nullable)reblog trail:(KtumblrKotlinArray<KtumblrCoreTrail *> * _Nullable)trail __attribute__((swift_name("init(blogName:idString:genesisPostId:postUrl:parentPostUrl:type:timestamp:date:format:reblogKey:tags:isBookmarklet:isMobile:sourceUrl:sourceTitle:isLiked:state:title:body:noteCount:summary:slug:rebloggedFromId:rebloggedFromUrl:rebloggedFromName:rebloggedFromTitle:rebloggedFromUuid:rebloggedFromCanMessage:rebloggedFromFollowing:rebloggedRootId:rebloggedRootUrl:rebloggedRootName:rebloggedRootTitle:rebloggedRootUuid:rebloggedRootCanMessage:rebloggedRootFollowing:notes:blog:reblog:trail:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KtumblrCoreLegacyVideoPostCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blog")
*/
@property (getter=blog_) KtumblrCoreBlog * _Nullable blog __attribute__((swift_name("blog")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blog_name")
*/
@property NSString * _Nullable blogName __attribute__((swift_name("blogName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="body")
*/
@property NSString * _Nullable body __attribute__((swift_name("body")));
@property NSString * _Nullable caption __attribute__((swift_name("caption")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="date")
*/
@property NSString * _Nullable date __attribute__((swift_name("date")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="format")
*/
@property NSString * _Nullable format __attribute__((swift_name("format")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="genesis_post_id")
*/
@property NSString * _Nullable genesisPostId __attribute__((swift_name("genesisPostId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_string")
*/
@property NSString * _Nullable idString __attribute__((swift_name("idString")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bookmarklet")
*/
@property KtumblrBoolean * _Nullable isBookmarklet __attribute__((swift_name("isBookmarklet")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="liked")
*/
@property KtumblrBoolean * _Nullable isLiked __attribute__((swift_name("isLiked")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mobile")
*/
@property KtumblrBoolean * _Nullable isMobile __attribute__((swift_name("isMobile")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="note_count")
*/
@property KtumblrInt * _Nullable noteCount __attribute__((swift_name("noteCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="notes")
*/
@property KtumblrKotlinArray<KtumblrCoreNote *> * _Nullable notes __attribute__((swift_name("notes")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="parent_post_url")
*/
@property NSString * _Nullable parentPostUrl __attribute__((swift_name("parentPostUrl")));
@property (readonly) KtumblrKotlinArray<KtumblrCoreVideo *> * _Nullable player __attribute__((swift_name("player")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="post_url")
*/
@property NSString * _Nullable postUrl __attribute__((swift_name("postUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblog")
*/
@property KtumblrCoreReblog * _Nullable reblog __attribute__((swift_name("reblog")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblog_key")
*/
@property NSString * _Nullable reblogKey __attribute__((swift_name("reblogKey")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_can_message")
*/
@property KtumblrBoolean * _Nullable rebloggedFromCanMessage __attribute__((swift_name("rebloggedFromCanMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_following")
*/
@property KtumblrBoolean * _Nullable rebloggedFromFollowing __attribute__((swift_name("rebloggedFromFollowing")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_id")
*/
@property NSString * _Nullable rebloggedFromId __attribute__((swift_name("rebloggedFromId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_name")
*/
@property NSString * _Nullable rebloggedFromName __attribute__((swift_name("rebloggedFromName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_title")
*/
@property NSString * _Nullable rebloggedFromTitle __attribute__((swift_name("rebloggedFromTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_url")
*/
@property NSString * _Nullable rebloggedFromUrl __attribute__((swift_name("rebloggedFromUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_from_uuid")
*/
@property NSString * _Nullable rebloggedFromUuid __attribute__((swift_name("rebloggedFromUuid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_can_message")
*/
@property KtumblrBoolean * _Nullable rebloggedRootCanMessage __attribute__((swift_name("rebloggedRootCanMessage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_following")
*/
@property KtumblrBoolean * _Nullable rebloggedRootFollowing __attribute__((swift_name("rebloggedRootFollowing")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_id")
*/
@property NSString * _Nullable rebloggedRootId __attribute__((swift_name("rebloggedRootId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_name")
*/
@property NSString * _Nullable rebloggedRootName __attribute__((swift_name("rebloggedRootName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_title")
*/
@property NSString * _Nullable rebloggedRootTitle __attribute__((swift_name("rebloggedRootTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_url")
*/
@property NSString * _Nullable rebloggedRootUrl __attribute__((swift_name("rebloggedRootUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged_root_uuid")
*/
@property NSString * _Nullable rebloggedRootUuid __attribute__((swift_name("rebloggedRootUuid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="slug")
*/
@property NSString * _Nullable slug __attribute__((swift_name("slug")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="source_title")
*/
@property NSString * _Nullable sourceTitle __attribute__((swift_name("sourceTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="source_url")
*/
@property NSString * _Nullable sourceUrl __attribute__((swift_name("sourceUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="state")
*/
@property NSString * _Nullable state __attribute__((swift_name("state")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="summary")
*/
@property NSString * _Nullable summary __attribute__((swift_name("summary")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tags")
*/
@property KtumblrKotlinArray<NSString *> * _Nullable tags __attribute__((swift_name("tags")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="timestamp")
*/
@property KtumblrInt * _Nullable timestamp __attribute__((swift_name("timestamp")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property NSString * _Nullable title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="trail")
*/
@property KtumblrKotlinArray<KtumblrCoreTrail *> * _Nullable trail __attribute__((swift_name("trail")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNote")))
@interface KtumblrCoreNote : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCoreNoteCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar_shape")
*/
@property (readonly) NSString * _Nullable avatarShape __attribute__((swift_name("avatarShape")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blog_name")
*/
@property (readonly) NSString * _Nullable blogName __attribute__((swift_name("blogName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blog_url")
*/
@property (readonly) NSString * _Nullable blogUrl __attribute__((swift_name("blogUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blog_uuid")
*/
@property (readonly) NSString * _Nullable blogUuid __attribute__((swift_name("blogUuid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="followed")
*/
@property (readonly) KtumblrBoolean * _Nullable isFollowed __attribute__((swift_name("isFollowed")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="post_id")
*/
@property (readonly) NSString * _Nullable postId __attribute__((swift_name("postId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblog_parent_blog_name")
*/
@property (readonly) NSString * _Nullable reblogParentBlogName __attribute__((swift_name("reblogParentBlogName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="timestamp")
*/
@property (readonly) KtumblrInt * _Nullable timestamp __attribute__((swift_name("timestamp")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReblog")))
@interface KtumblrCoreReblog : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCoreReblogCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="comment")
*/
@property NSString * _Nullable comment __attribute__((swift_name("comment")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tree_html")
*/
@property NSString * _Nullable treeHtml __attribute__((swift_name("treeHtml")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTrail")))
@interface KtumblrCoreTrail : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCoreTrailCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blog")
*/
@property (readonly) KtumblrCoreBlogInTrail * _Nullable blog __attribute__((swift_name("blog")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property (readonly) NSString * _Nullable content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content_raw")
*/
@property (readonly) NSString * _Nullable contentRaw __attribute__((swift_name("contentRaw")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="current_item")
*/
@property (readonly) BOOL isCurrentItem __attribute__((swift_name("isCurrentItem")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="root_item")
*/
@property (readonly) BOOL isRootItem __attribute__((swift_name("isRootItem")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="post")
*/
@property (readonly) KtumblrCoreIdInTrail * _Nullable post __attribute__((swift_name("post")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol KtumblrKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserResponse.Companion")))
@interface KtumblrCoreUserResponseCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreUserResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUser")))
@interface KtumblrCoreUser : KtumblrCoreResource
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCoreUserCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blogs")
*/
@property (readonly) KtumblrKotlinArray<KtumblrCoreBlog *> * _Nullable blogs __attribute__((swift_name("blogs")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="default_post_format")
*/
@property (readonly) NSString * _Nullable defaultPostFormat __attribute__((swift_name("defaultPostFormat")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="following")
*/
@property (readonly) KtumblrInt * _Nullable followingCount __attribute__((swift_name("followingCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="likes")
*/
@property (readonly) KtumblrInt * _Nullable likeCount __attribute__((swift_name("likeCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserDashboardResponse.Companion")))
@interface KtumblrCoreUserDashboardResponseCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreUserDashboardResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserFollowingResponse.Companion")))
@interface KtumblrCoreUserFollowingResponseCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreUserFollowingResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserLikesResponse.Companion")))
@interface KtumblrCoreUserLikesResponseCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreUserLikesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KtumblrKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<KtumblrKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KtumblrKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KtumblrKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<KtumblrKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<KtumblrKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KtumblrKotlinx_serialization_coreKSerializer <KtumblrKotlinx_serialization_coreSerializationStrategy, KtumblrKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlog.Companion")))
@interface KtumblrCoreBlogCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreBlogCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogAvatar")))
@interface KtumblrCoreBlogAvatar : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCoreBlogAvatarCompanion *companion __attribute__((swift_name("companion")));
@property KtumblrInt * _Nullable height __attribute__((swift_name("height")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@property KtumblrInt * _Nullable width __attribute__((swift_name("width")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogTheme")))
@interface KtumblrCoreBlogTheme : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCoreBlogThemeCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar_shape")
*/
@property NSString * _Nullable avatarShape __attribute__((swift_name("avatarShape")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="background_color")
*/
@property NSString * _Nullable backgroundColor __attribute__((swift_name("backgroundColor")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="body_font")
*/
@property NSString * _Nullable bodyFont __attribute__((swift_name("bodyFont")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="header_image")
*/
@property NSString * _Nullable headerImage __attribute__((swift_name("headerImage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="header_image_focused")
*/
@property NSString * _Nullable headerImageFocused __attribute__((swift_name("headerImageFocused")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="header_image_poster")
*/
@property NSString * _Nullable headerImagePoster __attribute__((swift_name("headerImagePoster")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="header_image_scaled")
*/
@property NSString * _Nullable headerImageScaled __attribute__((swift_name("headerImageScaled")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="header_stretch")
*/
@property BOOL isHeaderStretch __attribute__((swift_name("isHeaderStretch")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="show_avatar")
*/
@property (readonly) BOOL isShowAvatar __attribute__((swift_name("isShowAvatar")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="show_description")
*/
@property (readonly) BOOL isShowDescription __attribute__((swift_name("isShowDescription")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="show_header_image")
*/
@property (readonly) BOOL isShowHeaderImage __attribute__((swift_name("isShowHeaderImage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="show_title")
*/
@property (readonly) BOOL isShowTitle __attribute__((swift_name("isShowTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="link_color")
*/
@property (readonly) NSString * _Nullable linkColor __attribute__((swift_name("linkColor")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title_color")
*/
@property (readonly) NSString * _Nullable titleColor __attribute__((swift_name("titleColor")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title_font")
*/
@property (readonly) NSString * _Nullable titleFont __attribute__((swift_name("titleFont")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title_font_weight")
*/
@property (readonly) NSString * _Nullable titleFontWeight __attribute__((swift_name("titleFontWeight")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMeta.Companion")))
@interface KtumblrCoreMetaCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreMetaCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollowerUser.Companion")))
@interface KtumblrCoreFollowerUserCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreFollowerUserCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLegacyAnswerPost.Companion")))
@interface KtumblrCoreLegacyAnswerPostCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreLegacyAnswerPostCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLegacyLinkPost.Companion")))
@interface KtumblrCoreLegacyLinkPostCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreLegacyLinkPostCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLegacyPhotoPost.Companion")))
@interface KtumblrCoreLegacyPhotoPostCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreLegacyPhotoPostCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePhoto")))
@interface KtumblrCorePhoto : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCorePhotoCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="alt_sizes")
*/
@property (readonly) KtumblrKotlinArray<KtumblrCorePhotoSize *> * _Nullable altSizes __attribute__((swift_name("altSizes")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="caption")
*/
@property (readonly) NSString * _Nullable caption __attribute__((swift_name("caption")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="original_size")
*/
@property (readonly) KtumblrCorePhotoSize * _Nullable originalSize __attribute__((swift_name("originalSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLegacyQuotePost.Companion")))
@interface KtumblrCoreLegacyQuotePostCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreLegacyQuotePostCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLegacyTextPost.Companion")))
@interface KtumblrCoreLegacyTextPostCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreLegacyTextPostCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLegacyVideoPost.Companion")))
@interface KtumblrCoreLegacyVideoPostCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreLegacyVideoPostCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreVideo")))
@interface KtumblrCoreVideo : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCoreVideoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable embedCode __attribute__((swift_name("embedCode")));
@property (readonly) KtumblrInt * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNote.Companion")))
@interface KtumblrCoreNoteCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreNoteCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReblog.Companion")))
@interface KtumblrCoreReblogCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreReblogCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTrail.Companion")))
@interface KtumblrCoreTrailCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreTrailCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogInTrail")))
@interface KtumblrCoreBlogInTrail : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCoreBlogInTrailCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="active")
*/
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="can_be_followed")
*/
@property (readonly) BOOL isCanBeFollowed __attribute__((swift_name("isCanBeFollowed")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="share_following")
*/
@property (readonly) BOOL isShareFollowing __attribute__((swift_name("isShareFollowing")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="share_likes")
*/
@property (readonly) BOOL isShareLikes __attribute__((swift_name("isShareLikes")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="theme")
*/
@property (readonly) KtumblrCoreBlogTheme * _Nullable theme __attribute__((swift_name("theme")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreIdInTrail")))
@interface KtumblrCoreIdInTrail : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCoreIdInTrailCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUser.Companion")))
@interface KtumblrCoreUserCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreUserCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KtumblrKotlinx_serialization_coreEncoder
@required
- (id<KtumblrKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<KtumblrKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<KtumblrKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<KtumblrKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<KtumblrKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) KtumblrKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KtumblrKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<KtumblrKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KtumblrKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<KtumblrKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) KtumblrKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KtumblrKotlinx_serialization_coreDecoder
@required
- (id<KtumblrKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<KtumblrKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (KtumblrKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KtumblrKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<KtumblrKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) KtumblrKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogAvatar.Companion")))
@interface KtumblrCoreBlogAvatarCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreBlogAvatarCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogTheme.Companion")))
@interface KtumblrCoreBlogThemeCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreBlogThemeCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePhoto.Companion")))
@interface KtumblrCorePhotoCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCorePhotoCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePhotoSize")))
@interface KtumblrCorePhotoSize : KtumblrBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCorePhotoSizeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreVideo.Companion")))
@interface KtumblrCoreVideoCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreVideoCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlogInTrail.Companion")))
@interface KtumblrCoreBlogInTrailCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreBlogInTrailCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreIdInTrail.Companion")))
@interface KtumblrCoreIdInTrailCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreIdInTrailCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KtumblrKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<KtumblrKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KtumblrKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KtumblrKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) KtumblrKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KtumblrKotlinx_serialization_coreSerializersModule : KtumblrBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<KtumblrKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KtumblrKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KtumblrKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KtumblrKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KtumblrKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KtumblrKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KtumblrKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KtumblrKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol KtumblrKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KtumblrKotlinx_serialization_coreSerialKind : KtumblrBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KtumblrKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<KtumblrKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KtumblrKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KtumblrKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) KtumblrKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KtumblrKotlinNothing : KtumblrBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePhotoSize.Companion")))
@interface KtumblrCorePhotoSizeCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCorePhotoSizeCompanion *shared __attribute__((swift_name("shared")));
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KtumblrKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<KtumblrKotlinKClass>)kClass provider:(id<KtumblrKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KtumblrKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<KtumblrKotlinKClass>)kClass serializer:(id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<KtumblrKotlinKClass>)baseClass actualClass:(id<KtumblrKotlinKClass>)actualClass actualSerializer:(id<KtumblrKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<KtumblrKotlinKClass>)baseClass defaultDeserializerProvider:(id<KtumblrKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<KtumblrKotlinKClass>)baseClass defaultDeserializerProvider:(id<KtumblrKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<KtumblrKotlinKClass>)baseClass defaultSerializerProvider:(id<KtumblrKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KtumblrKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KtumblrKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol KtumblrKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol KtumblrKotlinKClass <KtumblrKotlinKDeclarationContainer, KtumblrKotlinKAnnotatedElement, KtumblrKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
