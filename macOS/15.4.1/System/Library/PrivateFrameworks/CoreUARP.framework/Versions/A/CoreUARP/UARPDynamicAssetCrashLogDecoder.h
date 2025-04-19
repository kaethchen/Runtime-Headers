@class NSDictionary, NSString, NSObject;
@protocol OS_os_log;

@interface UARPDynamicAssetCrashLogDecoder : NSObject {
    NSObject<OS_os_log> *_log;
    unsigned int _decoderId;
    NSDictionary *_cmapDictionary;
    NSString *_sectionName;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)copySectionName:(id)a0 inDictionary:(id)a1;
- (BOOL)createDictionary:(id)a0 inDictionary:(id)a1;
- (BOOL)decodeCrashLog:(id)a0 inDictionary:(id)a1;
- (id)initWithDecoderId:(unsigned int)a0 sectionName:(id)a1 inputDictionary:(id)a2;
- (id)initWithUuid:(unsigned int)a0 sectionName:(id)a1 inputDictionary:(id)a2;

@end
