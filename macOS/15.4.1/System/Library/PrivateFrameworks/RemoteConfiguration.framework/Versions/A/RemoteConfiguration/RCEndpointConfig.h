@class NSURL, NSString;

@interface RCEndpointConfig : NSObject <RCSerializable>

@property (readonly, nonatomic) unsigned long long environment;
@property (readonly, nonatomic) NSURL *productionURL;
@property (readonly, nonatomic) NSURL *stagingURL;
@property (readonly, nonatomic) NSURL *qaURL;
@property (readonly, nonatomic) NSURL *develURL;
@property (readonly, nonatomic) NSURL *testURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)environmentDescription;
- (id)initWithEnvironment:(unsigned long long)a0 productionURL:(id)a1 stagingURL:(id)a2 qaURL:(id)a3 develURL:(id)a4 testURL:(id)a5;

@end
