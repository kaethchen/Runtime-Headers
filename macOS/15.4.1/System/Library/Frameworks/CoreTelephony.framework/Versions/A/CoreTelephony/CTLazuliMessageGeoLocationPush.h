@class NSString, CTLazuliCustomMetaData, CTLazuliLocationCoordinates, CTLazuliChatBotSuggestedChipList;

@interface CTLazuliMessageGeoLocationPush : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTLazuliChatBotSuggestedChipList *chipList;
@property (retain, nonatomic) CTLazuliLocationCoordinates *coordinates;
@property (retain, nonatomic) NSString *additionalDescription;
@property (retain, nonatomic) CTLazuliCustomMetaData *metaData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliMessageGeoLocationPush:(id)a0;

@end
