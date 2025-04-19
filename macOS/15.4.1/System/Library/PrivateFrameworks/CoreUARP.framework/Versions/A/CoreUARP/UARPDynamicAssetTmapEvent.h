@class NSString, NSArray, NSObject;
@protocol OS_os_log;

@interface UARPDynamicAssetTmapEvent : NSObject <NSSecureCoding> {
    NSArray *_eventFields;
    NSObject<OS_os_log> *_log;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned int eventID;
@property (readonly) NSString *eventName;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)expandMticData:(id)a0;
- (id)initWithEventFields:(id)a0 eventID:(unsigned int)a1 endian:(id)a2;

@end
