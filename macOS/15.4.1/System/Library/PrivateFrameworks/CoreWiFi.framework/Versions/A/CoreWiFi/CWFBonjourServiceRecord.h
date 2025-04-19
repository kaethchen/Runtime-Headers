@class NSString;

@interface CWFBonjourServiceRecord : NSObject

@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *rawString;

+ (id)serviceRecordFromRecordName:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
