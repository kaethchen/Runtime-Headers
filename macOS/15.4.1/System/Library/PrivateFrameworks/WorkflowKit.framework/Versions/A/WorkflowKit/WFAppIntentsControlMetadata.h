@class NSError;
@protocol WFUserInterfaceHost;

@interface WFAppIntentsControlMetadata : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ identity;

- (id)init;
- (void).cxx_destruct;
- (void)presentIfPossibleInUserInterface:(id<WFUserInterfaceHost>)a0 completionBlock:(void (^)(NSError *))a1;

@end
