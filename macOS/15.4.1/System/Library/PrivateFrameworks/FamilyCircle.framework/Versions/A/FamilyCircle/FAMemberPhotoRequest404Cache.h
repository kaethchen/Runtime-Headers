@interface FAMemberPhotoRequest404Cache : NSObject {
    void /* unknown type, empty encoding */ persistence;
    void /* unknown type, empty encoding */ encoder;
    void /* unknown type, empty encoding */ decoder;
}

- (id)init;
- (void).cxx_destruct;
- (id)getLast404ResponseFor:(id)a0;
- (void)save404ResponseFor:(id)a0;
- (BOOL)shouldAllowRequestFor:(id)a0 cacheDuration:(long long)a1;

@end
