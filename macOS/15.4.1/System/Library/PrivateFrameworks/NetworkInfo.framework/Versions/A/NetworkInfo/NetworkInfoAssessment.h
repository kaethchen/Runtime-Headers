@class NSError, NetworkInfoResults;

@interface NetworkInfoAssessment : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_systemConfiguration;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ dispatchQueue;
    void /* unknown type, empty encoding */ scutil;
    void /* unknown type, empty encoding */ resolv;
    void /* unknown type, empty encoding */ logLeveler;
    void /* unknown type, empty encoding */ cfg;
}

- (id)init;
- (void).cxx_destruct;
- (void)runWithCompletionHandler:(void (^)(NetworkInfoResults *, NSError *))a0;

@end
