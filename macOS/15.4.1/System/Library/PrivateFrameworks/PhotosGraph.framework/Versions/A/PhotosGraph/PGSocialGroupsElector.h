@interface PGSocialGroupsElector : NSObject {
    void /* unknown type, empty encoding */ graph;
    void /* unknown type, empty encoding */ photoLibrary;
}

@property (class, nonatomic, readonly) long long defaultNumberOfElectedSocialGroups;

- (id)init;
- (void).cxx_destruct;
- (id)electedSocialGroupsMaxNumberOfElectedSocialGroups:(long long)a0 progressReporter:(id)a1 error:(id *)a2;

@end
