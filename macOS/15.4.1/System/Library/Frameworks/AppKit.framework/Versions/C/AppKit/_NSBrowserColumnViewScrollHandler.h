@interface _NSBrowserColumnViewScrollHandler : NSObject {
    BOOL _wasLastScrollVertical;
    double _accum;
}

- (void)shouldSendEvent:(id)a0 toSuperview:(BOOL *)a1 toSuperclass:(BOOL *)a2;

@end
