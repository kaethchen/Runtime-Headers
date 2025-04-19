@class NSString, NSDictionary, NSArray, NSDate, NSData;

@interface PKiCloudPrinter : NSObject

@property (retain) NSDictionary *iCloudInfo;
@property (readonly) NSString *uuid;
@property (readonly) NSString *dnssdName;
@property (readonly) NSString *displayName;
@property (readonly) NSString *location;
@property (readonly) NSArray *printerURLs;
@property (readonly) NSArray *endPoints;
@property (readonly) NSDate *lastUsedDate;
@property (readonly) long long printerType;
@property (readonly) BOOL isFromMCProfile;
@property (readonly) NSData *printerImageData;

+ (id)PKiCloudPrinterWithInfo:(id)a0;
+ (id)PKiCloudPrinterWithPKPrinter:(id)a0 displayName:(id)a1 location:(id)a2;

- (void).cxx_destruct;
- (id)userCodableDictionary;

@end
