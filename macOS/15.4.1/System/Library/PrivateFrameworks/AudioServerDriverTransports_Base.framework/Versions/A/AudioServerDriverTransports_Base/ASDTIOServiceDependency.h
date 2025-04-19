@class ASDTIOServiceManager, NSString, ASDTIOService, NSDictionary, ASDTIOServiceID;

@interface ASDTIOServiceDependency : NSObject

@property (retain, nonatomic) NSString *ioServiceClassName;
@property (retain, nonatomic) ASDTIOServiceID *ioServiceID;
@property (weak, nonatomic) ASDTIOServiceManager *ioServiceManager;
@property (retain, nonatomic) ASDTIOService *ioService;
@property (retain, nonatomic) NSDictionary *configuration;

+ (id)forAnyInstanceOfClassName:(id)a0 andConfiguration:(id)a1;
+ (id)forClassName:(id)a0 idValue:(id)a1 andConfiguration:(id)a2;
+ (BOOL)ioServiceMatched:(id)a0 withClassName:(id)a1 andIdentifier:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (BOOL)ioServiceAvailable:(id)a0 withManager:(id)a1;
- (void)addManagerDelegate:(id)a0;
- (id)initForAnyInstanceOfClassName:(id)a0 andConfiguration:(id)a1;
- (id)initForClassName:(id)a0 idValue:(id)a1 andConfiguration:(id)a2;
- (BOOL)ioServiceIdentifierMatches:(id)a0;
- (BOOL)ioServiceMatches:(id)a0 withManager:(id)a1;

@end
