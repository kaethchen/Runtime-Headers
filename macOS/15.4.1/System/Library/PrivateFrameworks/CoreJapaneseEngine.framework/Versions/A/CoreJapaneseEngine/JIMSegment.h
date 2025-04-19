@class NSString, JIMTextTree;

@interface JIMSegment : NSObject

@property (retain, nonatomic) NSString *reading;
@property (retain, nonatomic) NSString *surface;
@property (retain, nonatomic) JIMTextTree *textTree;
@property long long candidateIndex;
@property unsigned long long flags;
@property (readonly) NSString *preferredReading;
@property (readonly) NSString *preferredSurface;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCandidate:(id)a0;
- (id)initWithReading:(id)a0 surface:(id)a1;

@end
