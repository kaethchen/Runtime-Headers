@class NSString, NSArray;

@interface PKIdentityNationalIDCardDescriptor : NSObject <PKIdentityDocumentDescriptor>

@property (copy, nonatomic) NSString *regionCode;
@property (readonly, nonatomic) NSArray *elements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
