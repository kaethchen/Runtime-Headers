@class NSUUID, NSDictionary, NSURL, NSString, PKPrinterBonjourEndpoint;

@interface PKPrinterBrowseInfo : NSObject <NSSecureCoding, PKUserCodable> {
    NSUUID *_cachedUUID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSURL *printerURL;
@property (readonly) PKPrinterBonjourEndpoint *bonjourName;
@property (readonly) NSDictionary *txtRecord;
@property (readonly) long long type;
@property (readonly) NSUUID *uuid;
@property (retain) NSUUID *btleUUID;
@property long long btleMeasuredPower;
@property long long proximity;
@property (readonly) BOOL isIPPS;
@property (readonly) NSString *makeAndModel;
@property (readonly) NSString *location;
@property (readonly) BOOL isEphemeral;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)findPrinterWithBonjourEndpoint:(id)a0 withTimeout:(double)a1 completionHandler:(id /* block */)a2;
+ (int)rollCacheGeneration;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)type;
- (id)uuid;
- (id)initWithBonjourName:(id)a0 txtRecord:(id)a1;
- (id)initWithResolvedBonjourName:(id)a0;
- (BOOL)isEqualToBrowseInfo:(id)a0;
- (BOOL)isIPPS;
- (void)resolveOnMainQueue:(id /* block */)a0;
- (id)txtRecordObjectForKey:(id)a0;
- (id)userCodableDictionary;

@end
