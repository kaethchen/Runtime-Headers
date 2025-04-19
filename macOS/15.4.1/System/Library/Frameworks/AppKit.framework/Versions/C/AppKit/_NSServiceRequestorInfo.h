@class NSMutableSet, NSMutableArray;

@interface _NSServiceRequestorInfo : NSObject {
    id requestor;
    NSMutableSet *sendTypes;
    NSMutableArray *serviceEntries;
}

- (void)dealloc;
- (id)initWithRequestor:(id)a0;

@end
