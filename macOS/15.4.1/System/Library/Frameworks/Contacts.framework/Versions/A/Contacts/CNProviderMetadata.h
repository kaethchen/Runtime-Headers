@class NSString, NSDictionary, NSData;

@interface CNProviderMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long version;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) BOOL isResetRequested;
@property (nonatomic) BOOL isContentEnumerated;
@property (retain, nonatomic) NSData *itemAnchor;
@property (nonatomic) long long itemOffset;
@property (nonatomic) BOOL isMoreComing;
@property (readonly, nonatomic) NSData *dataRepresentation;

+ (id)log;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDataRepresentation:(id)a0;
- (id)initWithCoreDataProviderMetadata:(id)a0;
- (void)applyToCoreDataProviderMetadata:(id)a0;
- (id)initWithVersion:(long long)a0 displayName:(id)a1 userInfo:(id)a2 isResetRequested:(BOOL)a3 isContentEnumerated:(BOOL)a4 itemAnchor:(id)a5 itemOffset:(long long)a6 isMoreComing:(BOOL)a7;

@end
