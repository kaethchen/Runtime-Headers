@class NSString;

@interface FINodeIterator : NSObject <FINodeIterator> {
    struct OpaqueNodeIterator { } *_iterator;
}

@property (readonly, nonatomic) BOOL fullyPopulated;
@property (readonly, nonatomic) unsigned long long estimatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
