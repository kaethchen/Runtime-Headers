@class NSString, NSDictionary, NSArray, WRSignpost, NSMutableDictionary, NSMutableArray;

@interface WRSignpostTracker : NSObject {
    BOOL _isMiddleOfInterval;
    NSMutableDictionary *_environmentMutable;
    NSMutableArray *_intervalsMutable;
    NSMutableArray *_emitsMutable;
    NSMutableArray *_incompleteIntervalStartsMutable;
}

@property (readonly) WRSignpost *signpost;
@property (readonly) NSString *individuationIdentifier;
@property (readonly) NSDictionary *environment;
@property (readonly) NSArray *intervals;
@property (readonly) NSArray *emits;
@property (readonly) NSArray *incompleteIntervalStarts;
@property (readonly) long long timeUntilFirstSignpostNanoseconds;
@property (readonly) unsigned long long totalDurationNanoseconds;
@property (readonly) int count;

- (id)debugDescription;
- (void).cxx_destruct;
- (BOOL)exceededDiagnosticThreshold;
- (struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; } x1; })statsWithEventEndNs:(unsigned long long)a0;

@end
