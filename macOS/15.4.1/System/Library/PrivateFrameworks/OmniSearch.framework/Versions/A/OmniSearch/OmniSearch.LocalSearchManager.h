@interface OmniSearch.LocalSearchManager : SwiftNativeNSObject <SPQueryTaskDelegate> {
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ queryTask;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ ecrResult;
    void /* unknown type, empty encoding */ continuation;
    void /* unknown type, empty encoding */ photoLibrary;
}

- (id)init;
- (void)processQueryResponse:(id)a0;

@end
