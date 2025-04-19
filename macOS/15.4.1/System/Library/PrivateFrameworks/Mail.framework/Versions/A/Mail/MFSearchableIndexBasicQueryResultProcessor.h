@class NSString;
@protocol MFSearchableIndexQueryResultProcessorDelegate;

@interface MFSearchableIndexBasicQueryResultProcessor : NSObject <MFSearchableIndexQueryResultProcessor>

@property (getter=isCancelled) BOOL cancelled;
@property (weak, nonatomic) id<MFSearchableIndexQueryResultProcessorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (void)provider:(id)a0 foundResults:(id)a1 queryIdentifier:(id)a2;

@end
