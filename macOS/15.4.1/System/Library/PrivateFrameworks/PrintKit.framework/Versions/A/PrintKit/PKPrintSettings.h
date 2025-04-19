@class PKPaper, NSArray, NSString, NSURL;

@interface PKPrintSettings : NSObject <PKPropertyVisitable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSArray *pageRanges_asStringArray;
@property (copy) PKPaper *paper;
@property (copy) NSURL *printerInfoURL;
@property (copy) NSURL *printerSuppliesURL;
@property BOOL annotationsImaged;
@property int copies;
@property (copy) NSString *documentPassword;
@property (copy) NSString *duplex;
@property (copy) NSString *finishingTemplate;
@property (copy) NSArray *finishings;
@property (copy) NSString *inputSlot;
@property (copy) NSString *mediaType;
@property (copy) NSString *jobAccountID;
@property (copy) NSString *jobName;
@property (copy) NSString *orientation;
@property (copy) NSString *outputBin;
@property (copy) NSString *outputMode;
@property (copy) NSArray *pageRanges;
@property (copy) NSString *pageScale;
@property (copy) NSString *pageStackOrder;
@property (copy) NSString *printQuality;
@property (copy) NSString *thumbnailPosition;
@property (copy) NSString *jobPresetName;
@property (copy) NSString *fileType;

+ (id)photo;
+ (id)default;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithSettings:(id)a0;
- (void)_setupDefaults;
- (id)initWithPaper:(id)a0;
- (id)initWithUserCodableDictionary:(id)a0;
- (id)keyedNameToVisitName:(id)a0;
- (void)setFromUserCodableDictionary:(id)a0;
- (id)userCodableDictionary;
- (void)visitProperties:(struct Visitor { void /* function */ **x0; } *)a0;

@end
