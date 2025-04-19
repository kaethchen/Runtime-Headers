@class NSArray, NSString;

@interface VNRequestSpecifier : NSObject <NSCopying, NSSecureCoding, VNRequestSpecifying> {
    unsigned int _requestClassCode;
    unsigned long long _requestRevision;
    NSString *_cachedRequestClassName;
    Class _cachedRequestClass;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned int requestClassCode;
@property (readonly, copy) NSArray *allModelEquivalents;
@property (readonly) BOOL observationProvidesBoundsNormalizedToROI;
@property (readonly) BOOL isPublicRequestClass;
@property (readonly) BOOL isPrivateRequestClass;
@property (readonly) BOOL isPublicRevision;
@property (readonly) BOOL isPrivateRevision;
@property (readonly) BOOL isPublic;
@property (readonly) BOOL isPrivate;
@property (readonly, nonatomic) unsigned long long requestRevision;
@property (readonly, copy) NSString *requestClassName;

+ (id)allAvailableRequestClassNames;
+ (id)availablePrivateRequestClassNames;
+ (id)availableRequestClassNames;
+ (id)specifierForRequest:(id)a0;
+ (id)specifierForRequestClass:(Class)a0 revision:(unsigned long long)a1 error:(id *)a2;
+ (id)specifierForRequestClassCode:(unsigned int *)a0 revision:(unsigned long long)a1 error:(id *)a2;
+ (id)specifierForRequestClassName:(id)a0 revision:(unsigned long long)a1 error:(id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)specifiesRequestClass:(Class)a0 revision:(unsigned long long)a1;
- (BOOL)hasModelEquivalencyToRequestSpecifier:(id)a0;
- (id)initWithRequestClass:(Class)a0 name:(id)a1 code:(unsigned int)a2 revision:(unsigned long long)a3;
- (BOOL)representsSupportedRequestAndReturnError:(id *)a0;
- (Class)requestClassAndReturnError:(id *)a0;
- (BOOL)specifiesAnyRequestClass:(Class)a0;
- (BOOL)specifiesAnyRequestClassName:(id)a0;
- (BOOL)specifiesRequestClass:(Class)a0;
- (BOOL)specifiesRequestClass:(Class)a0 withAnyRevision:(unsigned long long)a1;
- (BOOL)specifiesRequestClassName:(id)a0;
- (BOOL)specifiesRequestClassName:(id)a0 revision:(unsigned long long)a1;
- (BOOL)specifiesRequestClassName:(id)a0 withAnyRevision:(unsigned long long)a1;

@end
