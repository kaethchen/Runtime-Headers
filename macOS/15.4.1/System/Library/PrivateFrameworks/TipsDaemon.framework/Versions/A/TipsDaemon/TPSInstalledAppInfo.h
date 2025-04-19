@class NSString;

@interface TPSInstalledAppInfo : TPSSerializableObject

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *minVersion;
@property (copy, nonatomic) NSString *maxVersion;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
