#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KtumblrCoreAuthAuthorizeUrlRequest, KtumblrCoreAuthOAuth2TokenRefreshRequest, KtumblrCoreAuthOAuth2TokenRequest, KtumblrCoreAuthOAuth2TokenResponse, KtumblrCoreAuthOAuth2TokenResponseCompanion, KtumblrCoreBlog, KtumblrCoreBlogAvatar, KtumblrCoreBlogAvatarCompanion, KtumblrCoreBlogAvatarRequest, KtumblrCoreBlogCompanion, KtumblrCoreBlogDeleteRequest, KtumblrCoreBlogDraftsRequest, KtumblrCoreBlogFollowersRequest, KtumblrCoreBlogFollowersResponse, KtumblrCoreBlogFollowersResponseCompanion, KtumblrCoreBlogFollowingRequest, KtumblrCoreBlogFollowingResponse, KtumblrCoreBlogFollowingResponseCompanion, KtumblrCoreBlogInTrail, KtumblrCoreBlogInTrailCompanion, KtumblrCoreBlogInfoRequest, KtumblrCoreBlogInfoResponse, KtumblrCoreBlogInfoResponseCompanion, KtumblrCoreBlogLikesRequest, KtumblrCoreBlogLikesResponse, KtumblrCoreBlogLikesResponseCompanion, KtumblrCoreBlogPostRequest, KtumblrCoreBlogPostsRequest, KtumblrCoreBlogPostsResponse, KtumblrCoreBlogPostsResponseCompanion, KtumblrCoreBlogQueueRequest, KtumblrCoreBlogReblogRequest, KtumblrCoreBlogSubmissionsRequest, KtumblrCoreBlogTheme, KtumblrCoreBlogThemeCompanion, KtumblrCoreBody<T>, KtumblrCoreBodyCompanion, KtumblrCoreFollowerUser, KtumblrCoreFollowerUserCompanion, KtumblrCoreIdInTrail, KtumblrCoreIdInTrailCompanion, KtumblrCoreLegacyAnswerPost, KtumblrCoreLegacyAnswerPostCompanion, KtumblrCoreLegacyLinkPost, KtumblrCoreLegacyLinkPostCompanion, KtumblrCoreLegacyPhotoPost, KtumblrCoreLegacyPhotoPostCompanion, KtumblrCoreLegacyQuotePost, KtumblrCoreLegacyQuotePostCompanion, KtumblrCoreLegacyTextPost, KtumblrCoreLegacyTextPostCompanion, KtumblrCoreLegacyVideoPost, KtumblrCoreLegacyVideoPostCompanion, KtumblrCoreMeta, KtumblrCoreMetaCompanion, KtumblrCoreNote, KtumblrCoreNoteCompanion, KtumblrCorePhoto, KtumblrCorePhotoCompanion, KtumblrCorePhotoSize, KtumblrCorePhotoSizeCompanion, KtumblrCorePost, KtumblrCorePostCompanion, KtumblrCoreReblog, KtumblrCoreReblogCompanion, KtumblrCoreResource, KtumblrCoreResponse<T>, KtumblrCoreResponseUnit, KtumblrCoreTaggedRequest, KtumblrCoreTrail, KtumblrCoreTrailCompanion, KtumblrCoreUser, KtumblrCoreUserCompanion, KtumblrCoreUserDashboardRequest, KtumblrCoreUserDashboardResponse, KtumblrCoreUserDashboardResponseCompanion, KtumblrCoreUserFollowRequest, KtumblrCoreUserFollowingRequest, KtumblrCoreUserFollowingResponse, KtumblrCoreUserFollowingResponseCompanion, KtumblrCoreUserLikeRequest, KtumblrCoreUserLikesRequest, KtumblrCoreUserLikesResponse, KtumblrCoreUserLikesResponseCompanion, KtumblrCoreUserResponse, KtumblrCoreUserResponseCompanion, KtumblrCoreUserUnfollowRequest, KtumblrCoreUserUnlikeRequest, KtumblrCoreVideo, KtumblrCoreVideoCompanion, KtumblrKotlinArray<T>, KtumblrKotlinNothing, KtumblrKotlinx_serialization_coreSerialKind, KtumblrKotlinx_serialization_coreSerializersModule, KtumblrKtumblrFactory;

@protocol KtumblrCoreAuthResource, KtumblrCoreBlogResource, KtumblrCoreMapRequest, KtumblrCoreTaggedResource, KtumblrCoreTumblr, KtumblrCoreUserResource, KtumblrKotlinAnnotation, KtumblrKotlinIterator, KtumblrKotlinKAnnotatedElement, KtumblrKotlinKClass, KtumblrKotlinKClassifier, KtumblrKotlinKDeclarationContainer, KtumblrKotlinx_serialization_coreCompositeDecoder, KtumblrKotlinx_serialization_coreCompositeEncoder, KtumblrKotlinx_serialization_coreDecoder, KtumblrKotlinx_serialization_coreDeserializationStrategy, KtumblrKotlinx_serialization_coreEncoder, KtumblrKotlinx_serialization_coreKSerializer, KtumblrKotlinx_serialization_coreSerialDescriptor, KtumblrKotlinx_serialization_coreSerializationStrategy, KtumblrKotlinx_serialization_coreSerializersModuleCollector;

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

/**
 * get request instance
 */
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

/**
 * Get a specific size avatar for a given blog
 */
- (KtumblrCoreResponse<NSString *> *)blogAvatarRequest:(KtumblrCoreBlogAvatarRequest *)request __attribute__((swift_name("blogAvatar(request:)")));

/**
 * Get the draft posts for a given blog
 */
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrCoreBlogPostsResponse *> *> *)blogDraftPostsRequest:(KtumblrCoreBlogDraftsRequest *)request __attribute__((swift_name("blogDraftPosts(request:)")));

/**
 * Get the followers for a given blog
 */
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrCoreBlogFollowersResponse *> *> *)blogFollowersRequest:(KtumblrCoreBlogFollowersRequest *)request __attribute__((swift_name("blogFollowers(request:)")));

/**
 * Get the following for a given blog
 */
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrCoreBlogFollowingResponse *> *> *)blogFollowingRequest:(KtumblrCoreBlogFollowingRequest *)request __attribute__((swift_name("blogFollowing(request:)")));

/**
 * Get the blog info for a given blog
 */
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrCoreBlogInfoResponse *> *> *)blogInfoRequest:(KtumblrCoreBlogInfoRequest *)request __attribute__((swift_name("blogInfo(request:)")));

/**
 * Get the public likes for a given blog
 */
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrCoreBlogLikesResponse *> *> *)blogLikesRequest:(KtumblrCoreBlogLikesRequest *)request __attribute__((swift_name("blogLikes(request:)")));

/**
 * Get the posts for a given blog
 */
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrCoreBlogPostsResponse *> *> *)blogPostsRequest:(KtumblrCoreBlogPostsRequest *)request __attribute__((swift_name("blogPosts(request:)")));

/**
 * Get the queued posts for a given blog
 */
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrCoreBlogPostsResponse *> *> *)blogQueuedPostsRequest:(KtumblrCoreBlogQueueRequest *)request __attribute__((swift_name("blogQueuedPosts(request:)")));

/**
 * Get the submissions for a given blog
 */
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrCoreBlogPostsResponse *> *> *)blogSubmissionsRequest:(KtumblrCoreBlogSubmissionsRequest *)request __attribute__((swift_name("blogSubmissions(request:)")));

/**
 * Create a post
 */
- (KtumblrCoreResponseUnit *)postCreateRequest:(KtumblrCoreBlogPostRequest *)request __attribute__((swift_name("postCreate(request:)")));

/**
 * Delete a given post
 */
- (KtumblrCoreResponseUnit *)postDeleteRequest:(KtumblrCoreBlogDeleteRequest *)request __attribute__((swift_name("postDelete(request:)")));

/**
 * Save edits for a given post
 */
- (KtumblrCoreResponseUnit *)postEditRequest:(KtumblrCoreBlogPostRequest *)request __attribute__((swift_name("postEdit(request:)")));

/**
 * Reblog a given post
 */
- (KtumblrCoreResponseUnit *)postReblogRequest:(KtumblrCoreBlogReblogRequest *)request __attribute__((swift_name("postReblog(request:)")));
@end

__attribute__((swift_name("CoreTaggedResource")))
@protocol KtumblrCoreTaggedResource
@required

/**
 * Tagged posts
 */
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrKotlinArray<KtumblrCorePost *> *> *> *)taggedRequest:(KtumblrCoreTaggedRequest *)request __attribute__((swift_name("tagged(request:)")));
@end

__attribute__((swift_name("CoreUserResource")))
@protocol KtumblrCoreUserResource
@required

/**
 * Follow a given blog
 */
- (KtumblrCoreResponseUnit *)followRequest:(KtumblrCoreUserFollowRequest *)request __attribute__((swift_name("follow(request:)")));

/**
 * Like a given post
 */
- (KtumblrCoreResponseUnit *)likeRequest:(KtumblrCoreUserLikeRequest *)request __attribute__((swift_name("like(request:)")));

/**
 * Unfollow a given blog
 */
- (KtumblrCoreResponseUnit *)unfollowRequest:(KtumblrCoreUserUnfollowRequest *)request __attribute__((swift_name("unfollow(request:)")));

/**
 * Unlike a given post
 */
- (KtumblrCoreResponseUnit *)unlikeRequest:(KtumblrCoreUserUnlikeRequest *)request __attribute__((swift_name("unlike(request:)")));

/**
 * Get the user info for the authenticated User
 */
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrCoreUserResponse *> *> *)user __attribute__((swift_name("user()")));

/**
 * Get the user dashboard for the authenticated User
 */
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrCoreUserDashboardResponse *> *> *)userDashboardRequest:(KtumblrCoreUserDashboardRequest *)request __attribute__((swift_name("userDashboard(request:)")));

/**
 * Get the blogs the given user is following
 */
- (KtumblrCoreResponse<KtumblrCoreBody<KtumblrCoreUserFollowingResponse *> *> *)userFollowingRequest:(KtumblrCoreUserFollowingRequest *)request __attribute__((swift_name("userFollowing(request:)")));

/**
 * Get the likes for the authenticated user
 */
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

/** OnlyForEdit */
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
 * This class is the base of all post types on Tumblr
 *
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=work/socialhub/ktumblr/util/json/PostSerializer))
*/
__attribute__((swift_name("CorePost")))
@interface KtumblrCorePost : KtumblrBase

/**
 * This class is the base of all post types on Tumblr
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * This class is the base of all post types on Tumblr
 */
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

/**
 * Undocumented
 */
@property KtumblrInt * _Nullable noteCount __attribute__((swift_name("noteCount")));
@property KtumblrKotlinArray<KtumblrCoreNote *> * _Nullable notes __attribute__((swift_name("notes")));
@property NSString * _Nullable parentPostUrl __attribute__((swift_name("parentPostUrl")));
@property NSString * _Nullable postUrl __attribute__((swift_name("postUrl")));
@property KtumblrCoreReblog * _Nullable reblog __attribute__((swift_name("reblog")));
@property NSString * _Nullable reblogKey __attribute__((swift_name("reblogKey")));
@property KtumblrBoolean * _Nullable rebloggedFromCanMessage __attribute__((swift_name("rebloggedFromCanMessage")));
@property KtumblrBoolean * _Nullable rebloggedFromFollowing __attribute__((swift_name("rebloggedFromFollowing")));

/**
 * ReblogInfo
 */
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
 * This class represents an individual Tumbelog
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlog")))
@interface KtumblrCoreBlog : KtumblrCoreResource

/**
 * This class represents an individual Tumbelog
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * This class represents an individual Tumbelog
 */
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
 * Undocumented Fields
 *
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


/**
 * This class is the base of all post types on Tumblr
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePost.Companion")))
@interface KtumblrCorePostCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * This class is the base of all post types on Tumblr
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCorePostCompanion *shared __attribute__((swift_name("shared")));

/**
 * This class is the base of all post types on Tumblr
 */
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * This class represents a Post of type "answer"
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLegacyAnswerPost")))
@interface KtumblrCoreLegacyAnswerPost : KtumblrCorePost
- (instancetype)initWithBlogName:(NSString * _Nullable)blogName idString:(NSString * _Nullable)idString genesisPostId:(NSString * _Nullable)genesisPostId postUrl:(NSString * _Nullable)postUrl parentPostUrl:(NSString * _Nullable)parentPostUrl type:(NSString * _Nullable)type timestamp:(KtumblrInt * _Nullable)timestamp date:(NSString * _Nullable)date format:(NSString * _Nullable)format reblogKey:(NSString * _Nullable)reblogKey tags:(KtumblrKotlinArray<NSString *> * _Nullable)tags isBookmarklet:(KtumblrBoolean * _Nullable)isBookmarklet isMobile:(KtumblrBoolean * _Nullable)isMobile sourceUrl:(NSString * _Nullable)sourceUrl sourceTitle:(NSString * _Nullable)sourceTitle isLiked:(KtumblrBoolean * _Nullable)isLiked state:(NSString * _Nullable)state title:(NSString * _Nullable)title body:(NSString * _Nullable)body noteCount:(KtumblrInt * _Nullable)noteCount summary:(NSString * _Nullable)summary slug:(NSString * _Nullable)slug rebloggedFromId:(NSString * _Nullable)rebloggedFromId rebloggedFromUrl:(NSString * _Nullable)rebloggedFromUrl rebloggedFromName:(NSString * _Nullable)rebloggedFromName rebloggedFromTitle:(NSString * _Nullable)rebloggedFromTitle rebloggedFromUuid:(NSString * _Nullable)rebloggedFromUuid rebloggedFromCanMessage:(KtumblrBoolean * _Nullable)rebloggedFromCanMessage rebloggedFromFollowing:(KtumblrBoolean * _Nullable)rebloggedFromFollowing rebloggedRootId:(NSString * _Nullable)rebloggedRootId rebloggedRootUrl:(NSString * _Nullable)rebloggedRootUrl rebloggedRootName:(NSString * _Nullable)rebloggedRootName rebloggedRootTitle:(NSString * _Nullable)rebloggedRootTitle rebloggedRootUuid:(NSString * _Nullable)rebloggedRootUuid rebloggedRootCanMessage:(KtumblrBoolean * _Nullable)rebloggedRootCanMessage rebloggedRootFollowing:(KtumblrBoolean * _Nullable)rebloggedRootFollowing notes:(KtumblrKotlinArray<KtumblrCoreNote *> * _Nullable)notes blog:(KtumblrCoreBlog * _Nullable)blog reblog:(KtumblrCoreReblog * _Nullable)reblog trail:(KtumblrKotlinArray<KtumblrCoreTrail *> * _Nullable)trail __attribute__((swift_name("init(blogName:idString:genesisPostId:postUrl:parentPostUrl:type:timestamp:date:format:reblogKey:tags:isBookmarklet:isMobile:sourceUrl:sourceTitle:isLiked:state:title:body:noteCount:summary:slug:rebloggedFromId:rebloggedFromUrl:rebloggedFromName:rebloggedFromTitle:rebloggedFromUuid:rebloggedFromCanMessage:rebloggedFromFollowing:rebloggedRootId:rebloggedRootUrl:rebloggedRootName:rebloggedRootTitle:rebloggedRootUuid:rebloggedRootCanMessage:rebloggedRootFollowing:notes:blog:reblog:trail:)"))) __attribute__((objc_designated_initializer));

/**
 * This class is the base of all post types on Tumblr
 */
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
 * This class represents a Post of type "link"
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLegacyLinkPost")))
@interface KtumblrCoreLegacyLinkPost : KtumblrCorePost
- (instancetype)initWithBlogName:(NSString * _Nullable)blogName idString:(NSString * _Nullable)idString genesisPostId:(NSString * _Nullable)genesisPostId postUrl:(NSString * _Nullable)postUrl parentPostUrl:(NSString * _Nullable)parentPostUrl type:(NSString * _Nullable)type timestamp:(KtumblrInt * _Nullable)timestamp date:(NSString * _Nullable)date format:(NSString * _Nullable)format reblogKey:(NSString * _Nullable)reblogKey tags:(KtumblrKotlinArray<NSString *> * _Nullable)tags isBookmarklet:(KtumblrBoolean * _Nullable)isBookmarklet isMobile:(KtumblrBoolean * _Nullable)isMobile sourceUrl:(NSString * _Nullable)sourceUrl sourceTitle:(NSString * _Nullable)sourceTitle isLiked:(KtumblrBoolean * _Nullable)isLiked state:(NSString * _Nullable)state title:(NSString * _Nullable)title body:(NSString * _Nullable)body noteCount:(KtumblrInt * _Nullable)noteCount summary:(NSString * _Nullable)summary slug:(NSString * _Nullable)slug rebloggedFromId:(NSString * _Nullable)rebloggedFromId rebloggedFromUrl:(NSString * _Nullable)rebloggedFromUrl rebloggedFromName:(NSString * _Nullable)rebloggedFromName rebloggedFromTitle:(NSString * _Nullable)rebloggedFromTitle rebloggedFromUuid:(NSString * _Nullable)rebloggedFromUuid rebloggedFromCanMessage:(KtumblrBoolean * _Nullable)rebloggedFromCanMessage rebloggedFromFollowing:(KtumblrBoolean * _Nullable)rebloggedFromFollowing rebloggedRootId:(NSString * _Nullable)rebloggedRootId rebloggedRootUrl:(NSString * _Nullable)rebloggedRootUrl rebloggedRootName:(NSString * _Nullable)rebloggedRootName rebloggedRootTitle:(NSString * _Nullable)rebloggedRootTitle rebloggedRootUuid:(NSString * _Nullable)rebloggedRootUuid rebloggedRootCanMessage:(KtumblrBoolean * _Nullable)rebloggedRootCanMessage rebloggedRootFollowing:(KtumblrBoolean * _Nullable)rebloggedRootFollowing notes:(KtumblrKotlinArray<KtumblrCoreNote *> * _Nullable)notes blog:(KtumblrCoreBlog * _Nullable)blog reblog:(KtumblrCoreReblog * _Nullable)reblog trail:(KtumblrKotlinArray<KtumblrCoreTrail *> * _Nullable)trail __attribute__((swift_name("init(blogName:idString:genesisPostId:postUrl:parentPostUrl:type:timestamp:date:format:reblogKey:tags:isBookmarklet:isMobile:sourceUrl:sourceTitle:isLiked:state:title:body:noteCount:summary:slug:rebloggedFromId:rebloggedFromUrl:rebloggedFromName:rebloggedFromTitle:rebloggedFromUuid:rebloggedFromCanMessage:rebloggedFromFollowing:rebloggedRootId:rebloggedRootUrl:rebloggedRootName:rebloggedRootTitle:rebloggedRootUuid:rebloggedRootCanMessage:rebloggedRootFollowing:notes:blog:reblog:trail:)"))) __attribute__((objc_designated_initializer));

/**
 * This class is the base of all post types on Tumblr
 */
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
 * This class represents a post of type "photo"
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLegacyPhotoPost")))
@interface KtumblrCoreLegacyPhotoPost : KtumblrCorePost
- (instancetype)initWithBlogName:(NSString * _Nullable)blogName idString:(NSString * _Nullable)idString genesisPostId:(NSString * _Nullable)genesisPostId postUrl:(NSString * _Nullable)postUrl parentPostUrl:(NSString * _Nullable)parentPostUrl type:(NSString * _Nullable)type timestamp:(KtumblrInt * _Nullable)timestamp date:(NSString * _Nullable)date format:(NSString * _Nullable)format reblogKey:(NSString * _Nullable)reblogKey tags:(KtumblrKotlinArray<NSString *> * _Nullable)tags isBookmarklet:(KtumblrBoolean * _Nullable)isBookmarklet isMobile:(KtumblrBoolean * _Nullable)isMobile sourceUrl:(NSString * _Nullable)sourceUrl sourceTitle:(NSString * _Nullable)sourceTitle isLiked:(KtumblrBoolean * _Nullable)isLiked state:(NSString * _Nullable)state title:(NSString * _Nullable)title body:(NSString * _Nullable)body noteCount:(KtumblrInt * _Nullable)noteCount summary:(NSString * _Nullable)summary slug:(NSString * _Nullable)slug rebloggedFromId:(NSString * _Nullable)rebloggedFromId rebloggedFromUrl:(NSString * _Nullable)rebloggedFromUrl rebloggedFromName:(NSString * _Nullable)rebloggedFromName rebloggedFromTitle:(NSString * _Nullable)rebloggedFromTitle rebloggedFromUuid:(NSString * _Nullable)rebloggedFromUuid rebloggedFromCanMessage:(KtumblrBoolean * _Nullable)rebloggedFromCanMessage rebloggedFromFollowing:(KtumblrBoolean * _Nullable)rebloggedFromFollowing rebloggedRootId:(NSString * _Nullable)rebloggedRootId rebloggedRootUrl:(NSString * _Nullable)rebloggedRootUrl rebloggedRootName:(NSString * _Nullable)rebloggedRootName rebloggedRootTitle:(NSString * _Nullable)rebloggedRootTitle rebloggedRootUuid:(NSString * _Nullable)rebloggedRootUuid rebloggedRootCanMessage:(KtumblrBoolean * _Nullable)rebloggedRootCanMessage rebloggedRootFollowing:(KtumblrBoolean * _Nullable)rebloggedRootFollowing notes:(KtumblrKotlinArray<KtumblrCoreNote *> * _Nullable)notes blog:(KtumblrCoreBlog * _Nullable)blog reblog:(KtumblrCoreReblog * _Nullable)reblog trail:(KtumblrKotlinArray<KtumblrCoreTrail *> * _Nullable)trail __attribute__((swift_name("init(blogName:idString:genesisPostId:postUrl:parentPostUrl:type:timestamp:date:format:reblogKey:tags:isBookmarklet:isMobile:sourceUrl:sourceTitle:isLiked:state:title:body:noteCount:summary:slug:rebloggedFromId:rebloggedFromUrl:rebloggedFromName:rebloggedFromTitle:rebloggedFromUuid:rebloggedFromCanMessage:rebloggedFromFollowing:rebloggedRootId:rebloggedRootUrl:rebloggedRootName:rebloggedRootTitle:rebloggedRootUuid:rebloggedRootCanMessage:rebloggedRootFollowing:notes:blog:reblog:trail:)"))) __attribute__((objc_designated_initializer));

/**
 * This class is the base of all post types on Tumblr
 */
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

/**
 * This class is the base of all post types on Tumblr
 */
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
 * This class represents a post of type "text"
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLegacyTextPost")))
@interface KtumblrCoreLegacyTextPost : KtumblrCorePost
- (instancetype)initWithBlogName:(NSString * _Nullable)blogName idString:(NSString * _Nullable)idString genesisPostId:(NSString * _Nullable)genesisPostId postUrl:(NSString * _Nullable)postUrl parentPostUrl:(NSString * _Nullable)parentPostUrl type:(NSString * _Nullable)type timestamp:(KtumblrInt * _Nullable)timestamp date:(NSString * _Nullable)date format:(NSString * _Nullable)format reblogKey:(NSString * _Nullable)reblogKey tags:(KtumblrKotlinArray<NSString *> * _Nullable)tags isBookmarklet:(KtumblrBoolean * _Nullable)isBookmarklet isMobile:(KtumblrBoolean * _Nullable)isMobile sourceUrl:(NSString * _Nullable)sourceUrl sourceTitle:(NSString * _Nullable)sourceTitle isLiked:(KtumblrBoolean * _Nullable)isLiked state:(NSString * _Nullable)state title:(NSString * _Nullable)title body:(NSString * _Nullable)body noteCount:(KtumblrInt * _Nullable)noteCount summary:(NSString * _Nullable)summary slug:(NSString * _Nullable)slug rebloggedFromId:(NSString * _Nullable)rebloggedFromId rebloggedFromUrl:(NSString * _Nullable)rebloggedFromUrl rebloggedFromName:(NSString * _Nullable)rebloggedFromName rebloggedFromTitle:(NSString * _Nullable)rebloggedFromTitle rebloggedFromUuid:(NSString * _Nullable)rebloggedFromUuid rebloggedFromCanMessage:(KtumblrBoolean * _Nullable)rebloggedFromCanMessage rebloggedFromFollowing:(KtumblrBoolean * _Nullable)rebloggedFromFollowing rebloggedRootId:(NSString * _Nullable)rebloggedRootId rebloggedRootUrl:(NSString * _Nullable)rebloggedRootUrl rebloggedRootName:(NSString * _Nullable)rebloggedRootName rebloggedRootTitle:(NSString * _Nullable)rebloggedRootTitle rebloggedRootUuid:(NSString * _Nullable)rebloggedRootUuid rebloggedRootCanMessage:(KtumblrBoolean * _Nullable)rebloggedRootCanMessage rebloggedRootFollowing:(KtumblrBoolean * _Nullable)rebloggedRootFollowing notes:(KtumblrKotlinArray<KtumblrCoreNote *> * _Nullable)notes blog:(KtumblrCoreBlog * _Nullable)blog reblog:(KtumblrCoreReblog * _Nullable)reblog trail:(KtumblrKotlinArray<KtumblrCoreTrail *> * _Nullable)trail __attribute__((swift_name("init(blogName:idString:genesisPostId:postUrl:parentPostUrl:type:timestamp:date:format:reblogKey:tags:isBookmarklet:isMobile:sourceUrl:sourceTitle:isLiked:state:title:body:noteCount:summary:slug:rebloggedFromId:rebloggedFromUrl:rebloggedFromName:rebloggedFromTitle:rebloggedFromUuid:rebloggedFromCanMessage:rebloggedFromFollowing:rebloggedRootId:rebloggedRootUrl:rebloggedRootName:rebloggedRootTitle:rebloggedRootUuid:rebloggedRootCanMessage:rebloggedRootFollowing:notes:blog:reblog:trail:)"))) __attribute__((objc_designated_initializer));

/**
 * This class is the base of all post types on Tumblr
 */
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
 * This class represents a post of type "video"
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLegacyVideoPost")))
@interface KtumblrCoreLegacyVideoPost : KtumblrCorePost
- (instancetype)initWithBlogName:(NSString * _Nullable)blogName idString:(NSString * _Nullable)idString genesisPostId:(NSString * _Nullable)genesisPostId postUrl:(NSString * _Nullable)postUrl parentPostUrl:(NSString * _Nullable)parentPostUrl type:(NSString * _Nullable)type timestamp:(KtumblrInt * _Nullable)timestamp date:(NSString * _Nullable)date format:(NSString * _Nullable)format reblogKey:(NSString * _Nullable)reblogKey tags:(KtumblrKotlinArray<NSString *> * _Nullable)tags isBookmarklet:(KtumblrBoolean * _Nullable)isBookmarklet isMobile:(KtumblrBoolean * _Nullable)isMobile sourceUrl:(NSString * _Nullable)sourceUrl sourceTitle:(NSString * _Nullable)sourceTitle isLiked:(KtumblrBoolean * _Nullable)isLiked state:(NSString * _Nullable)state title:(NSString * _Nullable)title body:(NSString * _Nullable)body noteCount:(KtumblrInt * _Nullable)noteCount summary:(NSString * _Nullable)summary slug:(NSString * _Nullable)slug rebloggedFromId:(NSString * _Nullable)rebloggedFromId rebloggedFromUrl:(NSString * _Nullable)rebloggedFromUrl rebloggedFromName:(NSString * _Nullable)rebloggedFromName rebloggedFromTitle:(NSString * _Nullable)rebloggedFromTitle rebloggedFromUuid:(NSString * _Nullable)rebloggedFromUuid rebloggedFromCanMessage:(KtumblrBoolean * _Nullable)rebloggedFromCanMessage rebloggedFromFollowing:(KtumblrBoolean * _Nullable)rebloggedFromFollowing rebloggedRootId:(NSString * _Nullable)rebloggedRootId rebloggedRootUrl:(NSString * _Nullable)rebloggedRootUrl rebloggedRootName:(NSString * _Nullable)rebloggedRootName rebloggedRootTitle:(NSString * _Nullable)rebloggedRootTitle rebloggedRootUuid:(NSString * _Nullable)rebloggedRootUuid rebloggedRootCanMessage:(KtumblrBoolean * _Nullable)rebloggedRootCanMessage rebloggedRootFollowing:(KtumblrBoolean * _Nullable)rebloggedRootFollowing notes:(KtumblrKotlinArray<KtumblrCoreNote *> * _Nullable)notes blog:(KtumblrCoreBlog * _Nullable)blog reblog:(KtumblrCoreReblog * _Nullable)reblog trail:(KtumblrKotlinArray<KtumblrCoreTrail *> * _Nullable)trail __attribute__((swift_name("init(blogName:idString:genesisPostId:postUrl:parentPostUrl:type:timestamp:date:format:reblogKey:tags:isBookmarklet:isMobile:sourceUrl:sourceTitle:isLiked:state:title:body:noteCount:summary:slug:rebloggedFromId:rebloggedFromUrl:rebloggedFromName:rebloggedFromTitle:rebloggedFromUuid:rebloggedFromCanMessage:rebloggedFromFollowing:rebloggedRootId:rebloggedRootUrl:rebloggedRootName:rebloggedRootTitle:rebloggedRootUuid:rebloggedRootCanMessage:rebloggedRootFollowing:notes:blog:reblog:trail:)"))) __attribute__((objc_designated_initializer));

/**
 * This class is the base of all post types on Tumblr
 */
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
 * This class represents a User on Tumblr
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUser")))
@interface KtumblrCoreUser : KtumblrCoreResource

/**
 * This class represents a User on Tumblr
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * This class represents a User on Tumblr
 */
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


/**
 * Serialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual serialization process, defined by the implementation
 * of the [serialize] method.
 *
 * [serialize] method takes an instance of [T] and transforms it into its serial form (a sequence of primitives),
 * calling the corresponding [Encoder] methods.
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KtumblrKotlinx_serialization_coreSerializationStrategy
@required

/**
 * Serializes the [value] of type [T] using the format that is represented by the given [encoder].
 * [serialize] method is format-agnostic and operates with a high-level structured [Encoder] API.
 * Throws [SerializationException] if value cannot be serialized.
 *
 * Example of serialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * @throws SerializationException in case of any serialization-specific error
 * @throws IllegalArgumentException if the supplied input does not comply encoder's specification
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (void)serializeEncoder:(id<KtumblrKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * Describes the structure of the serializable representation of [T], produced
 * by this serializer.
 */
@property (readonly) id<KtumblrKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * Deserialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual deserialization process, defined by the implementation
 * of the [deserialize] method.
 *
 * [deserialize] method takes an instance of [Decoder], and, knowing the serial form of the [T],
 * invokes primitive retrieval methods on the decoder and then transforms the received primitives
 * to an instance of [T].
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KtumblrKotlinx_serialization_coreDeserializationStrategy
@required

/**
 * Deserializes the value of type [T] using the format that is represented by the given [decoder].
 * [deserialize] method is format-agnostic and operates with a high-level structured [Decoder] API.
 * As long as most of the formats imply an arbitrary order of properties, deserializer should be able
 * to decode these properties in an arbitrary order and in a format-agnostic way.
 * For that purposes, [CompositeDecoder.decodeElementIndex]-based loop is used: decoder firstly
 * signals property at which index it is ready to decode and then expects caller to decode
 * property with the given index.
 *
 * Throws [SerializationException] if value cannot be deserialized.
 *
 * Example of deserialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun deserialize(decoder: Decoder): MyData = decoder.decodeStructure(descriptor) {
 *     // decodeStructure decodes beginning and end of the structure
 *     var int: Int? = null
 *     var list: List<String>? = null
 *     loop@ while (true) {
 *         when (val index = decodeElementIndex(descriptor)) {
 *             DECODE_DONE -> break@loop
 *             0 -> {
 *                 // Decode 'int' property as Int
 *                 int = decodeIntElement(descriptor, index = 0)
 *             }
 *             1 -> {
 *                 // Decode 'stringList' property as List<String>
 *                 list = decodeSerializableElement(descriptor, index = 1, serializer<List<String>>())
 *             }
 *             else -> throw SerializationException("Unexpected index $index")
 *         }
 *      }
 *     if (int == null || list == null) throwMissingFieldException()
 *     // Always use 0 as a value for alwaysZero property because we decided to do so.
 *     return MyData(int, list, alwaysZero = 0L)
 * }
 * ```
 *
 * @throws MissingFieldException if non-optional fields were not found during deserialization
 * @throws SerializationException in case of any deserialization-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (id _Nullable)deserializeDecoder:(id<KtumblrKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * Describes the structure of the serializable representation of [T], that current
 * deserializer is able to deserialize.
 */
@property (readonly) id<KtumblrKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * KSerializer is responsible for the representation of a serial form of a type [T]
 * in terms of [encoders][Encoder] and [decoders][Decoder] and for constructing and deconstructing [T]
 * from/to a sequence of encoding primitives. For classes marked with [@Serializable][Serializable], can be
 * obtained from generated companion extension `.serializer()` or from [serializer<T>()][serializer] function.
 *
 * Serialization is decoupled from the encoding process to make it completely format-agnostic.
 * Serialization represents a type as its serial form and is abstracted from the actual
 * format (whether its JSON, ProtoBuf or a hashing) and unaware of the underlying storage
 * (whether it is a string builder, byte array or a network socket), while
 * encoding/decoding is abstracted from a particular type and its serial form and is responsible
 * for transforming primitives ("here in an int property 'foo'" call from a serializer) into a particular
 * format-specific representation ("for a given int, append a property name in quotation marks,
 * then append a colon, then append an actual value" for JSON) and how to retrieve a primitive
 * ("give me an int that is 'foo' property") from the underlying representation ("expect the next string to be 'foo',
 * parse it, then parse colon, then parse a string until the next comma as an int and return it).
 *
 * Serial form consists of a structural description, declared by the [descriptor] and
 * actual serialization and deserialization processes, defined by the corresponding
 * [serialize] and [deserialize] methods implementation.
 *
 * Structural description specifies how the [T] is represented in the serial form:
 * its [kind][SerialKind] (e.g. whether it is represented as a primitive, a list or a class),
 * its [elements][SerialDescriptor.elementNames] and their [positional names][SerialDescriptor.getElementName].
 *
 * Serialization process is defined as a sequence of calls to an [Encoder], and transforms a type [T]
 * into a stream of format-agnostic primitives that represent [T], such as "here is an int, here is a double
 * and here is another nested object". It can be demonstrated by the example:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * // .. serialize method of a corresponding serializer
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * Deserialization process is symmetric and uses [Decoder].
 *
 * ### Exception types for `KSerializer` implementation
 *
 * Implementations of [serialize] and [deserialize] methods are allowed to throw
 * any subtype of [IllegalArgumentException] in order to indicate serialization
 * and deserialization errors.
 *
 * For serializer implementations, it is recommended to throw subclasses of [SerializationException] for
 * any serialization-specific errors related to invalid or unsupported format of the data
 * and [IllegalStateException] for errors during validation of the data.
 */
__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KtumblrKotlinx_serialization_coreKSerializer <KtumblrKotlinx_serialization_coreSerializationStrategy, KtumblrKotlinx_serialization_coreDeserializationStrategy>
@required
@end


/**
 * This class represents an individual Tumbelog
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlog.Companion")))
@interface KtumblrCoreBlogCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * This class represents an individual Tumbelog
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreBlogCompanion *shared __attribute__((swift_name("shared")));

/**
 * This class represents an individual Tumbelog
 */
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


/**
 * This class represents a Post of type "answer"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLegacyAnswerPost.Companion")))
@interface KtumblrCoreLegacyAnswerPostCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * This class represents a Post of type "answer"
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreLegacyAnswerPostCompanion *shared __attribute__((swift_name("shared")));

/**
 * This class represents a Post of type "answer"
 */
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * This class represents a Post of type "link"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLegacyLinkPost.Companion")))
@interface KtumblrCoreLegacyLinkPostCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * This class represents a Post of type "link"
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreLegacyLinkPostCompanion *shared __attribute__((swift_name("shared")));

/**
 * This class represents a Post of type "link"
 */
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * This class represents a post of type "photo"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLegacyPhotoPost.Companion")))
@interface KtumblrCoreLegacyPhotoPostCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * This class represents a post of type "photo"
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreLegacyPhotoPostCompanion *shared __attribute__((swift_name("shared")));

/**
 * This class represents a post of type "photo"
 */
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * This class represents a Photo in a PhotoPost
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePhoto")))
@interface KtumblrCorePhoto : KtumblrBase

/**
 * This class represents a Photo in a PhotoPost
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * This class represents a Photo in a PhotoPost
 */
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


/**
 * This class represents a post of type "text"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLegacyTextPost.Companion")))
@interface KtumblrCoreLegacyTextPostCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * This class represents a post of type "text"
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreLegacyTextPostCompanion *shared __attribute__((swift_name("shared")));

/**
 * This class represents a post of type "text"
 */
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * This class represents a post of type "video"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLegacyVideoPost.Companion")))
@interface KtumblrCoreLegacyVideoPostCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * This class represents a post of type "video"
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreLegacyVideoPostCompanion *shared __attribute__((swift_name("shared")));

/**
 * This class represents a post of type "video"
 */
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * An individual Video in a VideoPost
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreVideo")))
@interface KtumblrCoreVideo : KtumblrBase

/**
 * An individual Video in a VideoPost
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * An individual Video in a VideoPost
 */
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


/**
 * This class represents a User on Tumblr
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUser.Companion")))
@interface KtumblrCoreUserCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * This class represents a User on Tumblr
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreUserCompanion *shared __attribute__((swift_name("shared")));

/**
 * This class represents a User on Tumblr
 */
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Encoder is a core serialization primitive that encapsulates the knowledge of the underlying
 * format and its storage, exposing only structural methods to the serializer, making it completely
 * format-agnostic. Serialization process transforms a single value into the sequence of its
 * primitive elements, also called its serial form, while encoding transforms these primitive elements into an actual
 * format representation: JSON string, ProtoBuf ByteArray, in-memory map representation etc.
 *
 * Encoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, encoder represents output storage and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization transforms a value into a sequence of "here is an int, here is
 * a double, here a list of strings and here is another object that is a nested int", while encoding
 * transforms this sequence into a format-specific commands such as "insert opening curly bracket
 * for a nested object start, insert a name of the value, and the value separated with colon for an int etc."
 *
 * The symmetric interface for the deserialization process is [Decoder].
 *
 * ### Serialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `encode*` methods (e.g. [encodeInt]) can be used directly.
 *
 * ### Serialization. Structured types.
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `encode*` methods are not that helpful, because they do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeEncoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = encoder.beginStructure(descriptor)
 * // Encoding all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the encoder belongs to JSON format, then [beginStructure] will write an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeEncoder] that is aware of colon separator,
 * that should be appended between each key-value pair, whilst [CompositeEncoder.endStructure] will write a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, conflicting serial names,
 * [SerializationException] can be thrown by any encoder methods.
 * It is recommended to declare a format-specific subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `encode*` methods is not allowed and produces unspecified behaviour.
 * After thrown exception, the current encoder is left in an arbitrary state, no longer suitable for further encoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following serializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : SerializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun serializer(encoder: Encoder, value: StringHolder) {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = encoder.beginStructure(descriptor)
 *        // Encode the nested string value
 *        composite.encodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This serializer does not know anything about the underlying storage and will work with any properly-implemented encoder.
 * JSON, for example, writes an opening bracket `{` during the `beginStructure` call, writes `stringValue` key along
 * with its value in `encodeStringElement` and writes the closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by an encoder.
 *
 * ### Encoder implementation.
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatEncoder : Encoder {
 *
 *     ...
 *     override fun encodeDouble(value: Double) = encodeString(value.toString())
 *     override fun encodeInt(value: Int) = encodeString(value.toString())
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Encoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KtumblrKotlinx_serialization_coreEncoder
@required

/**
 * Encodes the beginning of the collection with size [collectionSize] and the given serializer of its type parameters.
 * This method has to be implemented only if you need to know collection size in advance, otherwise, [beginStructure] can be used.
 */
- (id<KtumblrKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));

/**
 * Encodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for encoding this very structure.
 * E.g the hierarchy:
 * ```
 * class StringHolder(val stringValue: String)
 * class Holder(val stringHolder: StringHolder)
 * ```
 *
 * with the following serialized form in JSON:
 * ```
 * {
 *   "stringHolder" : { "stringValue": "value" }
 * }
 * ```
 *
 * will be roughly represented as the following sequence of calls:
 * ```
 * // Holder serializer
 * fun serialize(encoder: Encoder, value: Holder) {
 *     val composite = encoder.beginStructure(descriptor) // the very first opening bracket '{'
 *     composite.encodeSerializableElement(descriptor, 0, value.stringHolder) // Serialize nested StringHolder
 *     composite.endStructure(descriptor) // The very last closing bracket
 * }
 *
 * // StringHolder serializer
 * fun serialize(encoder: Encoder, value: StringHolder) {
 *     val composite = encoder.beginStructure(descriptor) // One more '{' when the key "stringHolder" is already written
 *     composite.encodeStringElement(descriptor, 0, value.stringValue) // Serialize actual value
 *     composite.endStructure(descriptor) // Closing bracket
 * }
 * ```
 */
- (id<KtumblrKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Encodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));

/**
 * Encodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));

/**
 * Encodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));

/**
 * Encodes a enum value that is stored at the [index] in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * serializable value "C", [encodeEnum] method should be called with `2` as am index.
 *
 * This method does not imply any restrictions on the output format,
 * the format is free to store the enum by its name, index, ordinal or any other
 */
- (void)encodeEnumEnumDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));

/**
 * Returns [Encoder] for encoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a serializable value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * the following sequence is used:
 * ```
 * thisEncoder.encodeInline(MyInt.serializer().descriptor).encodeInt(my)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on the provided [descriptor].
 * For example, when this function is called on Json encoder with `UInt.serializer().descriptor`, the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<KtumblrKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));

/**
 * Encodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));

/**
 * Encodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * Notifies the encoder that value of a nullable type that is
 * being serialized is not null. It should be called before writing a non-null value
 * of nullable type:
 * ```
 * // Could be String? serialize method
 * if (value != null) {
 *     encoder.encodeNotNullMark()
 *     encoder.encodeStringValue(value)
 * } else {
 *     encoder.encodeNull()
 * }
 * ```
 *
 * This method has a use in highly-performant binary formats and can
 * be safely ignore by most of the regular formats.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * Encodes `null` value.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * Encodes the nullable [value] of type [T] by delegating the encoding process to the given [serializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<KtumblrKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));

/**
 * Encodes the [value] of type [T] by delegating the encoding process to the given [serializer].
 * For example, `encodeInt` call is equivalent to delegating integer encoding to [Int.serializer][Int.Companion.serializer]:
 * `encodeSerializableValue(Int.serializer())`
 */
- (void)encodeSerializableValueSerializer:(id<KtumblrKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));

/**
 * Encodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));

/**
 * Encodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KtumblrKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * Serial descriptor is an inherent property of [KSerializer] that describes the structure of the serializable type.
 * The structure of the serializable type is not only the characteristic of the type itself, but also of the serializer as well,
 * meaning that one type can have multiple descriptors that have completely different structures.
 *
 * For example, the class `class Color(val rgb: Int)` can have multiple serializable representations,
 * such as `{"rgb": 255}`, `"#0000FF"`, `[0, 0, 255]` and `{"red": 0, "green": 0, "blue": 255}`.
 * Representations are determined by serializers, and each such serializer has its own descriptor that identifies
 * each structure in a distinguishable and format-agnostic manner.
 *
 * ### Structure
 * Serial descriptor is identified by its [name][serialName] and consists of a kind, potentially empty set of
 * children elements, and additional metadata.
 *
 * * [serialName] uniquely identifies the descriptor (and the corresponding serializer) for non-generic types.
 *   For generic types, the actual type substitution is omitted from the string representation, and the name
 *   identifies the family of the serializers without type substitutions. However, type substitution is accounted for
 *   in [equals] and [hashCode] operations, meaning that descriptors of generic classes with the same name but different type
 *   arguments are not equal to each other.
 *   [serialName] is typically used to specify the type of the target class during serialization of polymorphic and sealed
 *   classes, for observability and diagnostics.
 * * [Kind][SerialKind] defines what this descriptor represents: primitive, enum, object, collection, etc.
 * * Children elements are represented as serial descriptors as well and define the structure of the type's elements.
 * * Metadata carries additional information, such as [nullability][nullable], [optionality][isElementOptional]
 *   and [serial annotations][getElementAnnotations].
 *
 * ### Usages
 * There are two general usages of the descriptors: THE serialization process and serialization introspection.
 *
 * #### Serialization
 * Serial descriptor is used as a bridge between decoders/encoders and serializers.
 * When asking for a next element, the serializer provides an expected descriptor to the decoder, and,
 * based on the descriptor content, the decoder decides how to parse its input.
 * In JSON, for example, when the encoder is asked to encode the next element and this element
 * is a subtype of [List], the encoder receives a descriptor with [StructureKind.LIST] and, based on that,
 * first writes an opening square bracket before writing the content of the list.
 *
 * Serial descriptor _encapsulates_ the structure of the data, so serializers can be free from
 * format-specific details. `ListSerializer` knows nothing about JSON and square brackets, providing
 * only the structure of the data and delegating encoding decision to the format itself.
 *
 * #### Introspection
 * Another usage of a serial descriptor is type introspection without its serialization.
 * Introspection can be used to check whether the given serializable class complies the
 * corresponding scheme and to generate JSON or ProtoBuf schema from the given class.
 *
 * ### Indices
 * Serial descriptor API operates with children indices.
 * For the fixed-size structures, such as regular classes, index is represented by a value in
 * the range from zero to [elementsCount] and represent and index of the property in this class.
 * Consequently, primitives do not have children and their element count is zero.
 *
 * For collections and maps indices do not have a fixed bound. Regular collections descriptors usually
 * have one element (`T`, maps have two, one for keys and one for values), but potentially unlimited
 * number of actual children values. Valid indices range is not known statically,
 * and implementations of such a descriptor should provide consistent and unbounded names and indices.
 *
 * In practice, for regular classes it is allowed to invoke `getElement*(index)` methods
 * with an index from `0` to [elementsCount] range and the element at the particular index corresponds to the
 * serializable property at the given position.
 * For collections and maps, index parameter for `getElement*(index)` methods is effectively bounded
 * by the maximal number of collection/map elements.
 *
 * ### Thread-safety and mutability
 * Serial descriptor implementation should be immutable and, thus, thread-safe.
 *
 * ### Equality and caching
 * Serial descriptor can be used as a unique identifier for format-specific data or schemas and
 * this implies the following restrictions on its `equals` and `hashCode`:
 *
 * An [equals] implementation should use both [serialName] and elements structure.
 * Comparing [elementDescriptors] directly is discouraged,
 * because it may cause a stack overflow error, e.g., if a serializable class `T` contains elements of type `T`.
 * To avoid it, a serial descriptor implementation should compare only descriptors
 * of class' type parameters, in a way that `serializer<Box<Int>>().descriptor != serializer<Box<String>>().descriptor`.
 * If type parameters are equal, descriptor structure should be compared by using children elements
 * descriptors' [serialName]s, which correspond to class names
 * (do not confuse with elements' own names, which correspond to properties' names); and/or other [SerialDescriptor]
 * properties, such as [kind].
 * An example of [equals] implementation:
 * ```
 * if (this === other) return true
 * if (other::class != this::class) return false
 * if (serialName != other.serialName) return false
 * if (!typeParametersAreEqual(other)) return false
 * if (this.elementDescriptors().map { it.serialName } != other.elementDescriptors().map { it.serialName }) return false
 * return true
 * ```
 *
 * [hashCode] implementation should use the same properties for computing the result.
 *
 * ### User-defined serial descriptors
 * The best way to define a custom descriptor is to use [buildClassSerialDescriptor] builder function, where
 * for each serializable property the corresponding element is declared.
 *
 * Example:
 * ```
 * // Class with custom serializer and custom serial descriptor
 * class Data(
 *     val intField: Int, // This field is ignored by custom serializer
 *     val longField: Long, // This field is written as long, but in serialized form is named as "_longField"
 *     val stringList: List<String> // This field is written as regular list of strings
 * )
 *
 * // Descriptor for such class:
 * buildClassSerialDescriptor("my.package.Data") {
 *     // intField is deliberately ignored by serializer -- not present in the descriptor as well
 *     element<Long>("_longField") // longField is named as _longField
 *     element("stringField", listSerialDescriptor<String>())
 * }
 *
 * // Example of 'serialize' function for such descriptor
 * override fun serialize(encoder: Encoder, value: Data) {
 *     encoder.encodeStructure(descriptor) {
 *         encodeLongElement(descriptor, 0, value.longField) // Will be written as "_longField" because descriptor's child at index 0 says so
 *         encodeSerializableElement(descriptor, 1, ListSerializer(String.serializer()), value.stringList)
 *     }
 * }
 * ```
 *
 * For classes that are represented as a single primitive value, [PrimitiveSerialDescriptor] builder function can be used instead.
 *
 * ### Consistency violations
 * An implementation of [SerialDescriptor] should be consistent with the implementation of the corresponding [KSerializer].
 * Yet it is not type-checked statically, thus making it possible to declare a non-consistent implementation of descriptor and serializer.
 * In such cases, the behavior of an underlying format is unspecified and may lead to both runtime errors and encoding of
 * corrupted data that is impossible to decode back.
 *
 * ### Not for implementation
 *
 * `SerialDescriptor` interface should not be implemented in 3rd party libraries, as new methods
 * might be added to this interface when kotlinx.serialization adds support for new Kotlin features.
 * This interface is safe to use and construct via [buildClassSerialDescriptor], [PrimitiveSerialDescriptor], and `SerialDescriptor` factory function.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KtumblrKotlinx_serialization_coreSerialDescriptor
@required

/**
 * Returns serial annotations of the child element at the given [index].
 * This method differs from `getElementDescriptor(index).annotations` by reporting only
 * element-specific annotations:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (NSArray<id<KtumblrKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * Retrieves the descriptor of the child element for the given [index].
 * For the property of type `T` on the position `i`, `getElementDescriptor(i)` yields the same result
 * as for `T.serializer().descriptor`, if the serializer for this property is not explicitly overridden
 * with `@Serializable(with = ...`)`, [Polymorphic] or [Contextual].
 * This method can be used to completely introspect the type that the current descriptor describes.
 *
 * Example:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementDescriptor(0).serialName // Returns "Nested"
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 *
 * @throws IndexOutOfBoundsException for illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (id<KtumblrKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * Returns an index in the children list of the given element by its name or [CompositeDecoder.UNKNOWN_NAME]
 * if there is no such element.
 * The resulting index, if it is not [CompositeDecoder.UNKNOWN_NAME], is guaranteed to be usable with [getElementName].
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.getElementIndex("name") // Returns 0
 * userDescriptor.getElementIndex("alias") // Returns 1
 * userDescriptor.getElementIndex("lastName") // Returns CompositeDecoder.UNKNOWN_NAME = -3
 * ```
 */
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * Returns a positional name of the child at the given [index].
 * Positional name represents a corresponding property name in the class, associated with
 * the current descriptor.
 *
 * Do not confuse with [serialName], which returns class name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive)
 */
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * Whether the element at the given [index] is optional (can be absent in serialized form).
 * For generated descriptors, all elements that have a corresponding default parameter value are
 * marked as optional. Custom serializers can treat optional values in a serialization-specific manner
 * without a default parameters constraint.
 *
 * Example of optionality:
 * ```
 * @Serializable
 * class Holder(
 *     val a: Int, // isElementOptional(0) == false
 *     val b: Int?, // isElementOptional(1) == false
 *     val c: Int? = null, // isElementOptional(2) == true
 *     val d: List<Int>, // isElementOptional(3) == false
 *     val e: List<Int> = listOf(1), // isElementOptional(4) == true
 * )
 * ```
 * Returns `false` for valid indices of collections, maps, and enums.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * Returns serial annotations of the associated class.
 * Serial annotations can be used to specify additional metadata that may be used during serialization.
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * Do not confuse with [getElementAnnotations]:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 */
@property (readonly) NSArray<id<KtumblrKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * The number of elements this descriptor describes, besides from the class itself.
 * [elementsCount] describes the number of **semantic** elements, not the number
 * of actual fields/properties in the serialized form, even though they frequently match.
 *
 * For example, for the following class
 * `class Complex(val real: Long, val imaginary: Long)` the corresponding descriptor
 * and the serialized form both have two elements, while for `List<Int>`
 * the corresponding descriptor has a single element (`IntDescriptor`, the type of list element),
 * but from zero up to `Int.MAX_VALUE` values in the serialized form:
 *
 * ```
 * @Serializable
 * class Complex(val real: Long, val imaginary: Long)
 *
 * Complex.serializer().descriptor.elementsCount // Returns 2
 *
 * @Serializable
 * class OuterList(val list: List<Int>)
 *
 * OuterList.serializer().descriptor.getElementDescriptor(0).elementsCount // Returns 1
 * ```
 */
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));

/**
 * Returns `true` if this descriptor describes a serializable value class which underlying value
 * is serialized directly.
 *
 * This property is true for serializable `@JvmInline value` classes:
 * ```
 * @Serializable
 * class User(val name: Name)
 *
 * @Serializable
 * @JvmInline
 * value class Name(val value: String)
 *
 * User.serializer().descriptor.isInline // false
 * User.serializer().descriptor.getElementDescriptor(0).isInline // true
 * Name.serializer().descriptor.isInline // true
 * ```
 */
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * Whether the descriptor describes a nullable type.
 * Returns `true` if associated serializer can serialize/deserialize nullable elements of the described type.
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.isNullable // Returns false
 * userDescriptor.getElementDescriptor(0).isNullable // Returns false
 * userDescriptor.getElementDescriptor(1).isNullable // Returns true
 * ```
 */
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * The kind of the serialized form that determines **the shape** of the serialized data.
 * Formats use serial kind to add and parse serializer-agnostic metadata to the result.
 *
 * For example, JSON format wraps [classes][StructureKind.CLASS] and [StructureKind.MAP] into
 * brackets, while ProtoBuf just serialize these types in separate ways.
 *
 * Kind should be consistent with the implementation, for example, if it is a [primitive][PrimitiveKind],
 * then its element count should be zero and vice versa.
 *
 * Example of introspecting kinds:
 *
 * ```
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.kind // Returns StructureKind.CLASS
 * userDescriptor.getElementDescriptor(0).kind // Returns PrimitiveKind.STRING
 * ```
 */
@property (readonly) KtumblrKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * Serial name of the descriptor that identifies a pair of the associated serializer and target class.
 *
 * For generated and default serializers, the serial name is equal to the corresponding class's fully qualified name
 * or, if overridden, [SerialName].
 * Custom serializers should provide a unique serial name that identifies both the serializable class and
 * the serializer itself, ignoring type arguments if they are present, for example: `my.package.LongAsTrimmedString`.
 *
 * Do not confuse with [getElementName], which returns property name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 */
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end


/**
 * Decoder is a core deserialization primitive that encapsulates the knowledge of the underlying
 * format and an underlying storage, exposing only structural methods to the deserializer, making it completely
 * format-agnostic. Deserialization process takes a decoder and asks him for a sequence of primitive elements,
 * defined by a deserializer serial form, while decoder knows how to retrieve these primitive elements from an actual format
 * representations.
 *
 * Decoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, the decoder represents input storage, and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization asks a decoder for a sequence of "give me an int, give me
 * a double, give me a list of strings and give me another object that is a nested int", while decoding
 * transforms this sequence into a format-specific commands such as "parse the part of the string until the next quotation mark
 * as an int to retrieve an int, parse everything within the next curly braces to retrieve elements of a nested object etc."
 *
 * The symmetric interface for the serialization process is [Encoder].
 *
 * ### Deserialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `decode*` methods (e.g. [decodeInt]) can be used directly.
 *
 * ### Deserialization. Structured types
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `decode*` methods are not that helpful, because format may not require a strict order of data
 * (e.g. JSON or XML), do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeDecoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = decoder.beginStructure(descriptor)
 * // Decode all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the decoder belongs to JSON format, then [beginStructure] will parse an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeDecoder] that is aware of colon separator,
 * that should be read after each key-value pair, whilst [CompositeDecoder.endStructure] will parse a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, missing control symbols or attributes, and unknown symbols,
 * [SerializationException] can be thrown by any decoder methods. It is recommended to declare a format-specific
 * subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `decode*` methods is not allowed and produces unspecified behavior.
 * After thrown exception, the current decoder is left in an arbitrary state, no longer suitable for further decoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following deserializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : DeserializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun deserializer(decoder: Decoder): StringHolder {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeElementIndex(descriptor) != 0)
 *            throw MissingFieldException("Field 'stringValue' is missing")
 *        // Decode the nested string value
 *        val value = composite.decodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This deserializer does not know anything about the underlying data and will work with any properly-implemented decoder.
 * JSON, for example, parses an opening bracket `{` during the `beginStructure` call, checks that the next key
 * after this bracket is `stringValue` (using the descriptor), returns the value after the colon as string value
 * and parses closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and parsing structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by a decoder.
 *
 * ### Decoder implementation
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatDecoder : Decoder {
 *
 *     ...
 *     override fun decodeDouble(): Double = decodeString().toDouble()
 *     override fun decodeInt(): Int = decodeString().toInt()
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Decoder` interface is not stable for inheritance in 3rd-party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KtumblrKotlinx_serialization_coreDecoder
@required

/**
 * Decodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for decoding this very structure.
 *
 * Typically, classes, collections and maps are represented as a nested structure in a serialized form.
 * E.g. the following JSON
 * ```
 * {
 *     "a": 2,
 *     "b": { "nested": "c" }
 *     "c": [1, 2, 3],
 *     "d": null
 * }
 * ```
 * has three nested structures: the very beginning of the data, "b" value and "c" value.
 */
- (id<KtumblrKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Decodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));

/**
 * Decodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));

/**
 * Decodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));

/**
 * Decodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));

/**
 * Decodes a enum value and returns its index in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * underlying input "C", [decodeEnum] method should return `2` as a result.
 *
 * This method does not imply any restrictions on the input format,
 * the format is free to store the enum by its name, index, ordinal or any other enum representation.
 */
- (int32_t)decodeEnumEnumDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a target value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`, the following sequence is used:
 * ```
 * thisDecoder.decodeInline(MyInt.serializer().descriptor).decodeInt()
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided [descriptor].
 * For example, when this function is called on `Json` decoder with
 * `UInt.serializer().descriptor`, the returned decoder is able to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 *
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<KtumblrKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));

/**
 * Decodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));

/**
 * Decodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * Returns `true` if the current value in decoder is not null, false otherwise.
 * This method is usually used to decode potentially nullable data:
 * ```
 * // Could be String? deserialize() method
 * public fun deserialize(decoder: Decoder): String? {
 *     if (decoder.decodeNotNullMark()) {
 *         return decoder.decodeString()
 *     } else {
 *         return decoder.decodeNull()
 *     }
 * }
 * ```
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * Decodes the `null` value and returns it.
 *
 * It is expected that `decodeNotNullMark` was called
 * prior to `decodeNull` invocation and the case when it returned `true` was handled.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (KtumblrKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * Decodes the nullable value of type [T] by delegating the decoding process to the given [deserializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KtumblrKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));

/**
 * Decodes the value of type [T] by delegating the decoding process to the given [deserializer].
 * For example, `decodeInt` call is equivalent to delegating integer decoding to [Int.serializer][Int.Companion.serializer]:
 * `decodeSerializableValue(Int.serializer())`
 */
- (id _Nullable)decodeSerializableValueDeserializer:(id<KtumblrKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));

/**
 * Decodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));

/**
 * Decodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
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


/**
 * This class represents a Photo in a PhotoPost
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePhoto.Companion")))
@interface KtumblrCorePhotoCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * This class represents a Photo in a PhotoPost
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCorePhotoCompanion *shared __attribute__((swift_name("shared")));

/**
 * This class represents a Photo in a PhotoPost
 */
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * This class represents a photo at a given size
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePhotoSize")))
@interface KtumblrCorePhotoSize : KtumblrBase

/**
 * This class represents a photo at a given size
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * This class represents a photo at a given size
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KtumblrCorePhotoSizeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end


/**
 * An individual Video in a VideoPost
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreVideo.Companion")))
@interface KtumblrCoreVideoCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * An individual Video in a VideoPost
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCoreVideoCompanion *shared __attribute__((swift_name("shared")));

/**
 * An individual Video in a VideoPost
 */
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


/**
 * [CompositeEncoder] is a part of encoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Encoder.beginStructure].
 *
 * All `encode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` is always the same as one used in [Encoder.beginStructure]. While this parameter may seem redundant,
 *      it is required for efficient serialization process to avoid excessive field spilling.
 *      If you are writing your own format, you can safely ignore this parameter and use one used in `beginStructure`
 *      for simplicity.
 *   * `index` of the element being encoded. This element at this index in the descriptor should be associated with
 *      the one being written.
 *
 * The symmetric interface for the deserialization process is [CompositeDecoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeEncoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KtumblrKotlinx_serialization_coreCompositeEncoder
@required

/**
 * Encodes a boolean [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BOOLEAN] kind.
 */
- (void)encodeBooleanElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));

/**
 * Encodes a single byte [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BYTE] kind.
 */
- (void)encodeByteElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));

/**
 * Encodes a 16-bit unicode character [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.CHAR] kind.
 */
- (void)encodeCharElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.DOUBLE] kind.
 */
- (void)encodeDoubleElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.FLOAT] kind.
 */
- (void)encodeFloatElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));

/**
 * Returns [Encoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisEncoder.encodeInlineElement(MyData.serializer.descriptor, 0).encodeInt(my)
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisEncoder.encodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer(), myInt)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on provided descriptor.
 * For example, when this function is called on Json encoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Encoder.encodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<KtumblrKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));

/**
 * Encodes a 32-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.INT] kind.
 */
- (void)encodeIntElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.LONG] kind.
 */
- (void)encodeLongElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * Delegates nullable [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KtumblrKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Delegates [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 */
- (void)encodeSerializableElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KtumblrKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Encodes a 16-bit short [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.SHORT] kind.
 */
- (void)encodeShortElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));

/**
 * Encodes a string [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.STRING] kind.
 */
- (void)encodeStringElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));

/**
 * Denotes the end of the structure associated with current encoder.
 * For example, composite encoder of JSON format will write
 * a closing bracket in the underlying input and reduce the number of nesting for pretty printing.
 */
- (void)endStructureDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Whether the format should encode values that are equal to the default values.
 * This method is used by plugin-generated serializers for properties with default values:
 * ```
 * @Serializable
 * class WithDefault(val int: Int = 42)
 * // serialize method
 * if (value.int != 42 || output.shouldEncodeElementDefault(serialDesc, 0)) {
 *    encoder.encodeIntElement(serialDesc, 0, value.int);
 * }
 * ```
 *
 * This method is never invoked for properties annotated with [EncodeDefault].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KtumblrKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * [SerializersModule] is a collection of serializers used by [ContextualSerializer] and [PolymorphicSerializer]
 * to override or provide serializers at the runtime, whereas at the compile-time they provided by the serialization plugin.
 * It can be considered as a map where serializers can be found using their statically known KClasses.
 *
 * To enable runtime serializers resolution, one of the special annotations must be used on target types
 * ([Polymorphic] or [Contextual]), and a serial module with serializers should be used during construction of [SerialFormat].
 *
 * Serializers module can be built with `SerializersModule {}` builder function.
 * Empty module can be obtained with `EmptySerializersModule()` factory function.
 *
 * @see Contextual
 * @see Polymorphic
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KtumblrKotlinx_serialization_coreSerializersModule : KtumblrBase

/**
 * Copies contents of this module to the given [collector].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<KtumblrKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * Returns a contextual serializer associated with a given [kClass].
 * If given class has generic parameters and module has provider for [kClass],
 * [typeArgumentsSerializers] are used to create serializer.
 * This method is used in context-sensitive operations on a property marked with [Contextual] by a [ContextualSerializer].
 *
 * @see SerializersModuleBuilder.contextual
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KtumblrKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KtumblrKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KtumblrKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * Returns a polymorphic serializer registered for a class of the given [value] in the scope of [baseClass].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KtumblrKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KtumblrKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * Returns a polymorphic deserializer registered for a [serializedClassName] in the scope of [baseClass]
 * or default value constructed from [serializedClassName] if a default serializer provider was registered.
 *
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
 * Serial kind is an intrinsic property of [SerialDescriptor] that indicates how
 * the corresponding type is structurally represented by its serializer.
 *
 * Kind is used by serialization formats to determine how exactly the given type
 * should be serialized. For example, JSON format detects the kind of the value and,
 * depending on that, may write it as a plain value for primitive kinds, open a
 * curly brace '{' for class-like structures and square bracket '[' for list- and array- like structures.
 *
 * Kinds are used both during serialization, to serialize a value properly and statically, and
 * to introspect the type structure or build serialization schema.
 *
 * Kind should match the structure of the serialized form, not the structure of the corresponding Kotlin class.
 * Meaning that if serializable class `class IntPair(val left: Int, val right: Int)` is represented by the serializer
 * as a single `Long` value, its descriptor should have [PrimitiveKind.LONG] without nested elements even though the class itself
 * represents a structure with two primitive fields.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KtumblrKotlinx_serialization_coreSerialKind : KtumblrBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * [CompositeDecoder] is a part of decoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Decoder.beginStructure].
 *
 * Typically, for unordered data, [CompositeDecoder] is used by a serializer withing a [decodeElementIndex]-based
 * loop that decodes all the required data one-by-one in any order and then terminates by calling [endStructure].
 * Please refer to [decodeElementIndex] for example of such loop.
 *
 * All `decode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` argument is always the same as one used in [Decoder.beginStructure].
 *   * `index` of the element being decoded. For [sequential][decodeSequentially] decoding, it is always a monotonic
 *      sequence from `0` to `descriptor.elementsCount` and for indexing-loop it is always an index that [decodeElementIndex]
 *      has returned from the last call.
 *
 * The symmetric interface for the serialization process is [CompositeEncoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeDecoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KtumblrKotlinx_serialization_coreCompositeDecoder
@required

/**
 * Decodes a boolean value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BOOLEAN] kind.
 */
- (BOOL)decodeBooleanElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));

/**
 * Decodes a single byte value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BYTE] kind.
 */
- (int8_t)decodeByteElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));

/**
 * Decodes a 16-bit unicode character value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.CHAR] kind.
 */
- (unichar)decodeCharElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));

/**
 * Method to decode collection size that may be called before the collection decoding.
 * Collection type includes [Collection], [Map] and [Array] (including primitive arrays).
 * Method can return `-1` if the size is not known in advance, though for [sequential decoding][decodeSequentially]
 * knowing precise size is a mandatory requirement.
 */
- (int32_t)decodeCollectionSizeDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));

/**
 * Decodes a 64-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.DOUBLE] kind.
 */
- (double)decodeDoubleElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));

/**
 *  Decodes the index of the next element to be decoded.
 *  Index represents a position of the current element in the serial descriptor element that can be found
 *  with [SerialDescriptor.getElementIndex].
 *
 *  If this method returns non-negative index, the caller should call one of the `decode*Element` methods
 *  with a resulting index.
 *  Apart from positive values, this method can return [DECODE_DONE] to indicate that no more elements
 *  are left or [UNKNOWN_NAME] to indicate that symbol with an unknown name was encountered.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        var i: Int? = null
 *        var d: Double? = null
 *        while (true) {
 *            when (val index = composite.decodeElementIndex(descriptor)) {
 *                0 -> i = composite.decodeIntElement(descriptor, 0)
 *                1 -> d = composite.decodeDoubleElement(descriptor, 1)
 *                DECODE_DONE -> break // Input is over
 *                else -> error("Unexpected index: $index)
 *            }
 *        }
 *        composite.endStructure(descriptor)
 *        require(i != null && d != null)
 *        return MyPair(i, d)
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * The need in such a loop comes from unstructured nature of most serialization formats.
 * For example, JSON for the following input `{"d": 2.0, "i": 1}`, will first read `d` key with index `1`
 * and only after `i` with the index `0`.
 *
 * A potential implementation of this method for JSON format can be the following:
 * ```
 * fun decodeElementIndex(descriptor: SerialDescriptor): Int {
 *     // Ignore arrays
 *     val nextKey: String? = myStringJsonParser.nextKey()
 *     if (nextKey == null) return DECODE_DONE
 *     return descriptor.getElementIndex(nextKey) // getElementIndex can return UNKNOWN_NAME
 * }
 * ```
 *
 * If [decodeSequentially] returns `true`, the caller might skip calling this method.
 */
- (int32_t)decodeElementIndexDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.FLOAT] kind.
 */
- (float)decodeFloatElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisDecoder.decodeInlineElement(MyData.serializer().descriptor, 0).decodeInt()
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisDecoder.decodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer())
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided descriptor.
 * For example, when this function is called on `Json` decoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned decoder is able
 * to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Decoder.decodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<KtumblrKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));

/**
 * Decodes a 32-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.INT] kind.
 */
- (int32_t)decodeIntElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));

/**
 * Decodes a 64-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.LONG] kind.
 */
- (int64_t)decodeLongElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * Decodes nullable value of the type [T] with the given [deserializer].
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, efficiently using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KtumblrKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Checks whether the current decoder supports strictly ordered decoding of the data
 * without calling to [decodeElementIndex].
 * If the method returns `true`, the caller might skip [decodeElementIndex] calls
 * and start invoking `decode*Element` directly, incrementing the index of the element one by one.
 * This method can be called by serializers (either generated or user-defined) as a performance optimization,
 * but there is no guarantee that the method will be ever called. Practically, it means that implementations
 * that may benefit from sequential decoding should also support a regular [decodeElementIndex]-based decoding as well.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeSequentially()) {
 *            val i = composite.decodeIntElement(descriptor, index = 0) // Mind the sequential indexing
 *            val d = composite.decodeIntElement(descriptor, index = 1)
 *            composite.endStructure(descriptor)
 *            return MyPair(i, d)
 *        } else {
 *            // Fallback to `decodeElementIndex` loop, refer to its documentation for details
 *        }
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * Sequential decoding is a performance optimization for formats with strictly ordered schema,
 * usually binary ones. Regular formats such as JSON or ProtoBuf cannot use this optimization,
 * because e.g. in the latter example, the same data can be represented both as
 * `{"i": 1, "d": 1.0}` and `{"d": 1.0, "i": 1}` (thus, unordered).
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));

/**
 * Decodes value of the type [T] with the given [deserializer].
 *
 * Implementations of [CompositeDecoder] may use their format-specific deserializers
 * for particular data types, e.g. handle [ByteArray] specifically if format is binary.
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, effectively using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 */
- (id _Nullable)decodeSerializableElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KtumblrKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Decodes a 16-bit short value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.SHORT] kind.
 */
- (int16_t)decodeShortElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));

/**
 * Decodes a string value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.STRING] kind.
 */
- (NSString *)decodeStringElementDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));

/**
 * Denotes the end of the structure associated with current decoder.
 * For example, composite decoder of JSON format will expect (and parse)
 * a closing bracket in the underlying input.
 */
- (void)endStructureDescriptor:(id<KtumblrKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Context of the current decoding process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KtumblrKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KtumblrKotlinNothing : KtumblrBase
@end


/**
 * This class represents a photo at a given size
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePhotoSize.Companion")))
@interface KtumblrCorePhotoSizeCompanion : KtumblrBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * This class represents a photo at a given size
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KtumblrCorePhotoSizeCompanion *shared __attribute__((swift_name("shared")));

/**
 * This class represents a photo at a given size
 */
- (id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * [SerializersModuleCollector] can introspect and accumulate content of any [SerializersModule] via [SerializersModule.dumpTo],
 * using a visitor-like pattern: [contextual] and [polymorphic] functions are invoked for each registered serializer.
 *
 * ### Not stable for inheritance
 *
 * `SerializersModuleCollector` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KtumblrKotlinx_serialization_coreSerializersModuleCollector
@required

/**
 * Accept a provider, associated with generic [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<KtumblrKotlinKClass>)kClass provider:(id<KtumblrKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KtumblrKotlinx_serialization_coreKSerializer>> *typeArgumentsSerializers))provider __attribute__((swift_name("contextual(kClass:provider:)")));

/**
 * Accept a serializer, associated with [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<KtumblrKotlinKClass>)kClass serializer:(id<KtumblrKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));

/**
 * Accept a serializer, associated with [actualClass] for polymorphic serialization.
 */
- (void)polymorphicBaseClass:(id<KtumblrKotlinKClass>)baseClass actualClass:(id<KtumblrKotlinKClass>)actualClass actualSerializer:(id<KtumblrKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 *
 * This function affect only deserialization process. To avoid confusion, it was deprecated and replaced with [polymorphicDefaultDeserializer].
 * To affect serialization process, use [SerializersModuleCollector.polymorphicDefaultSerializer].
 *
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 *
 * @see SerializersModuleCollector.polymorphicDefaultDeserializer
 * @see SerializersModuleCollector.polymorphicDefaultSerializer
 */
- (void)polymorphicDefaultBaseClass:(id<KtumblrKotlinKClass>)baseClass defaultDeserializerProvider:(id<KtumblrKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable className))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * Default deserializers provider affects only deserialization process. Serializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultSerializer] method.
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultDeserializerBaseClass:(id<KtumblrKotlinKClass>)baseClass defaultDeserializerProvider:(id<KtumblrKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable className))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * Accept a default serializer provider, associated with the [baseClass] for polymorphic serialization.
 * [defaultSerializerProvider] is invoked when no polymorphic serializers for `value` in the scope of [baseClass] were found.
 *
 * Default serializers provider affects only serialization process. Deserializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultDeserializer] method.
 *
 * [defaultSerializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultSerializerBaseClass:(id<KtumblrKotlinKClass>)baseClass defaultSerializerProvider:(id<KtumblrKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id value))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
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
