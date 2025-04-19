@class SHCatalog, NSString;
@protocol SHMatcher, SHSessionDriver, SHSessionDelegate;

@interface SHSession : NSObject <SHMatcherDelegate, SHSessionDriverDelegate>

@property (readonly) id<SHMatcher> matcher;
@property (readonly) id<SHSessionDriver> sessionDriver;
@property (readonly) SHCatalog *catalog;
@property (weak) id<SHSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCatalog:(id)a0;
- (void)matchSignature:(id)a0;
- (void)handleCommonActionsForResponse:(id)a0;
- (BOOL)_isSessionDriverSignature:(id)a0;
- (void)didCalculateSpectralData:(id)a0;
- (id)initWithCatalog:(id)a0 matcher:(id)a1 sessionDriver:(id)a2;
- (void)matchStreamingBuffer:(id)a0 atTime:(id)a1;
- (void)matcher:(id)a0 didProduceResponse:(id)a1;
- (void)sessionDriverEncounteredUnrecoverableError:(id)a0 forSignature:(id)a1;
- (BOOL)shouldGenerateSpectralOutput;
- (BOOL)validateSignature:(id)a0 error:(id *)a1;

@end
