@class NSData, HIDDisplayPresetInterface;

@interface HIDDisplayPresetData : NSObject {
    long long _index;
    HIDDisplayPresetInterface *_deviceRef;
}

@property (readonly) BOOL valid;
@property (readonly) BOOL writable;
@property (readonly) NSData *uniqueID;

- (void).cxx_destruct;
- (id)get:(id *)a0;
- (id)hidDisplay;
- (id)initWithDisplayDevice:(id)a0 index:(long long)a1;
- (BOOL)set:(id)a0 error:(id *)a1;
- (void)setHidDisplay:(id)a0;

@end
