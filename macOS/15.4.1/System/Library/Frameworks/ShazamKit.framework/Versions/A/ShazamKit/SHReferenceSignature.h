@class NSString, SHSignature;

@interface SHReferenceSignature : NSObject

@property (readonly, copy) NSString *ID;
@property (readonly) unsigned long long trackID;
@property (readonly) SHSignature *signature;

- (void).cxx_destruct;
- (id)initWithID:(id)a0 trackID:(unsigned long long)a1 signature:(id)a2;

@end
