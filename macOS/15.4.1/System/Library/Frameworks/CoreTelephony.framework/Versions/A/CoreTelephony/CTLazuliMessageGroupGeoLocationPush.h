@class CTLazuliCustomMetaData, CTLazuliGroupChatInformation, CTLazuliLocationCoordinates;

@interface CTLazuliMessageGroupGeoLocationPush : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTLazuliGroupChatInformation *chatInformation;
@property (retain, nonatomic) CTLazuliLocationCoordinates *coordinates;
@property (retain, nonatomic) CTLazuliCustomMetaData *metaData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliMessageGroupGeoLocationPush:(id)a0;

@end
