@class NSLocale, CDMDataDispatcherContext;

@interface CDMServiceGraphCommand : CDMBaseCommand <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CDMDataDispatcherContext *dataDispatcherContext;
@property (retain, nonatomic) NSLocale *locale;

+ (id)serviceGraphName;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)loggingRequestID;

@end
