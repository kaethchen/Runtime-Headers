@class GCSProfile, NSString, GCSElement, NSDictionary, NSDate;
@protocol GCSJSONObject;

@interface GCSController : NSObject <GCSJSONSerializable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<GCSJSONObject> jsonObject;
@property (readonly, nonatomic) NSString *persistentIdentifier;
@property (readonly, nonatomic) NSDate *modifiedDate;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *productCategoryKey;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) GCSElement *shareButton;
@property (readonly, nonatomic) NSDictionary *buttons;
@property (readonly, nonatomic) NSDictionary *dpads;
@property (readonly, nonatomic) NSString *logoSfSymbolsName;
@property (readonly, nonatomic) BOOL supportsHaptics;
@property (readonly, nonatomic) BOOL supportsLight;
@property (readonly, nonatomic) GCSProfile *baseProfile;
@property (readonly, nonatomic) NSString *localizedProductCategory;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSDictionary *miscellaneous;

+ (id)archivalClasses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)id;
- (id)allButtons;
- (id)allDpads;
- (id)allElements;
- (id)initWithName:(id)a0 persistentIdentifier:(id)a1 productCategoryKey:(id)a2 hidden:(BOOL)a3 shareButton:(id)a4 buttons:(id)a5 dpads:(id)a6 logoSfSymbolsName:(id)a7 supportsHaptics:(BOOL)a8 supportsLight:(BOOL)a9 baseProfile:(id)a10 miscellaneous:(id)a11;
- (id)initDummy;
- (id)initWithJSONObject:(id)a0;
- (id)copyWithBaseProfile:(id)a0;

@end
