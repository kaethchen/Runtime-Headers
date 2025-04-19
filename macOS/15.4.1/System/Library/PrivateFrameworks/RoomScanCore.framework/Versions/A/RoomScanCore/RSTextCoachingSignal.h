@class NSString;

@interface RSTextCoachingSignal : NSObject <NSCopying> {
    float _score;
    long long _type;
    long long _state;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) float score;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
