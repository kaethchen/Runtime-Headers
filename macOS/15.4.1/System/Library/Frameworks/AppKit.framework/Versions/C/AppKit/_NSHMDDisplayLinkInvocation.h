@interface _NSHMDDisplayLinkInvocation : NSHMDDisplayLinkInvocation {
    double _timestamp;
    double _duration;
}

- (id)init;
- (double)timestamp;
- (double)duration;
- (id)initWithTimestamp:(double)a0 duration:(double)a1;

@end
