@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CrashReporterMessage : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *body;

+ (id)allMessagesAsString;
+ (void)messageChanged;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (void)setCrashLogSignatureString:(id)a0;

@end
