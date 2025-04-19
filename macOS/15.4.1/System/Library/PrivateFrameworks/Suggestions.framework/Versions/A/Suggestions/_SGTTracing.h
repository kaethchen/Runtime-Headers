@class NSMutableSet;

@interface _SGTTracing : NSObject {
    double tracingMin;
    double tracingMax;
    int tracingLevel;
    NSMutableSet *searchPaths;
    BOOL hasAbandoned;
}

- (void).cxx_destruct;

@end
