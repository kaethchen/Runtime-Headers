@class NSString;

@interface DGOperationOrdering : NSObject <IPAEditOperationOrdering> {
    long long _pipelineVersion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
