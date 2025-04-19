@class NSString, NSMutableDictionary;

@interface MRExternalDeviceMessageMetrics : NSObject {
    NSString *_path;
    NSMutableDictionary *_entries;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (void)write;
- (void)addMessage:(id)a0 data:(id)a1;

@end
