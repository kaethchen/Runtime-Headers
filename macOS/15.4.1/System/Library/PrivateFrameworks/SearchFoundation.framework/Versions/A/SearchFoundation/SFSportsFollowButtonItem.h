@class NSString, NSDictionary, NSData, SFSportsItem, SFToggleButtonConfiguration, SFButtonItemAppearance;

@interface SFSportsFollowButtonItem : SFButtonItem <SFSportsFollowButtonItem, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SFSportsItem *sportsItem;
@property (retain, nonatomic) SFToggleButtonConfiguration *toggleButtonConfiguration;
@property (copy, nonatomic) NSString *fallbackTitle;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SFButtonItemAppearance *buttonAppearance;
@property (nonatomic) unsigned long long uniqueId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;

@end
