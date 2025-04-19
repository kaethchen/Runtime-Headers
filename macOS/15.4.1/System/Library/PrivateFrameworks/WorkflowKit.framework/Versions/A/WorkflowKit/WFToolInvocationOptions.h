@class NSString;

@interface WFToolInvocationOptions : NSObject {
    void /* unknown type, empty encoding */ locale;
    void /* unknown type, empty encoding */ requestIdentifier;
    void /* unknown type, empty encoding */ lnInterfaceIdiom;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ lnInteractionMode;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) NSString *requestIdentifier;
@property (nonatomic, readonly) NSString *lnInterfaceIdiom;

- (id)init;
- (void).cxx_destruct;

@end
