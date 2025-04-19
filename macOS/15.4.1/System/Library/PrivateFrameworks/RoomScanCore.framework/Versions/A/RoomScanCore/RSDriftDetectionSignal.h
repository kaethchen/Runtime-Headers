@interface RSDriftDetectionSignal : NSObject <NSCopying> {
    float _score;
    long long _type;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
