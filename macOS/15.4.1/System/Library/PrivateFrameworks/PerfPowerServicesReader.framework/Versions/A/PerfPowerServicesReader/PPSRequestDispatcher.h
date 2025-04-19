@class NSURL, NSString, NSDateInterval;

@interface PPSRequestDispatcher : NSObject <PPSDataReaderProtocol>

@property (readonly, copy, nonatomic) NSURL *filepath;
@property (readonly, copy) NSDateInterval *timelineBoundaries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFilepath:(id)a0;
- (id)_executeRequest:(id)a0 withError:(id *)a1;
- (long long)_readerTypeForSubsystem:(id)a0 category:(id)a1;
- (id)dataForRequest:(id)a0 withError:(id *)a1;

@end
