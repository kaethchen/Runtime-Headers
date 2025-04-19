@class NSEnumerator, NWURLError;

@interface NWURLErrorUserInfoDictionaryEnumerator : NSEnumerator

@property (retain, nonatomic) NWURLError *error;
@property (retain, nonatomic) NSEnumerator *userInfoKeyEnumerator;

- (void).cxx_destruct;
- (id)nextObject;

@end
