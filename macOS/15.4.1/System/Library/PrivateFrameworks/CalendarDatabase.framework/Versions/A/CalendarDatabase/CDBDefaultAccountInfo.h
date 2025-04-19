@class NSString, NSArray;

@interface CDBDefaultAccountInfo : NSObject <CDBAccountInfo> {
    NSArray *_accountUserAddresses;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
