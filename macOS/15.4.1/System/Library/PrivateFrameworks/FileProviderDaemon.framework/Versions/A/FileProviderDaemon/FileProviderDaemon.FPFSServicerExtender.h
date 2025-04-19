@class NSString;

@interface FileProviderDaemon.FPFSServicerExtender : NSObject <FPDLifetimeExtender> {
    void /* unknown type, empty encoding */ request;
}

@property (nonatomic, readonly) int requestEffectivePID;
@property (nonatomic, readonly) NSString *prettyDescription;

- (id)init;
- (void).cxx_destruct;

@end
