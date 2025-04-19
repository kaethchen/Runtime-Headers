@class NSArray, NSString;

@interface FIChildrenIterator : NSObject <FINodeIterator> {
    BOOL _fullyPopulated;
}

@property (copy, nonatomic) NSArray *children;
@property (readonly, nonatomic) BOOL includeInvisible;
@property (nonatomic) unsigned long long index;
@property (readonly, nonatomic) BOOL fullyPopulated;
@property (readonly, nonatomic) unsigned long long estimatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
