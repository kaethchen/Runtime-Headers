@class NSString, NSObject;
@protocol FINodeIterator;

@interface FINodeIteratorWithExtraChildren : NSObject <FINodeIterator>

@property (retain, nonatomic) NSObject<FINodeIterator> *baseIterator;
@property (nonatomic) BOOL baseIteratorDone;
@property (retain, nonatomic) NSObject<FINodeIterator> *extraIterator;
@property (readonly, nonatomic) BOOL fullyPopulated;
@property (readonly, nonatomic) unsigned long long estimatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
