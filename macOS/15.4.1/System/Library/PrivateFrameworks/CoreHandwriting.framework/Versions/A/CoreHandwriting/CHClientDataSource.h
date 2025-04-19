@class CHClientStrokeProvider, CHClientCalculateDocumentProvider, NSString;

@interface CHClientDataSource : NSObject <CHRecognitionSessionDataSource>

@property (readonly, nonatomic) CHClientStrokeProvider *strokeProviderSnapshot;
@property (readonly, nonatomic) CHClientCalculateDocumentProvider *calculateDocumentProviderSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithStrokeProvider:(id)a0;
- (id)initWithStrokeProvider:(id)a0 calculateDocumentProvider:(id)a1;

@end
