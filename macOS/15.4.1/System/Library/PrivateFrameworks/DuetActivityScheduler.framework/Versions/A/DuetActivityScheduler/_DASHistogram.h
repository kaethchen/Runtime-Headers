@class NSCountedSet, NSDictionary;

@interface _DASHistogram : NSObject

@property (readonly, copy, nonatomic) NSCountedSet *counts;
@property (readonly, copy, nonatomic) NSDictionary *countsDictionary;

- (void).cxx_destruct;
- (id)initWithEvents:(id)a0;

@end
