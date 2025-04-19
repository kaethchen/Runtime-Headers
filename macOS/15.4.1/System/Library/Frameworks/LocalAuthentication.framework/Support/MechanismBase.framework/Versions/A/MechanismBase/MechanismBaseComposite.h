@class NSArray, NSString;

@interface MechanismBaseComposite : MechanismBase <MechanismComposite>

@property (nonatomic) unsigned long long k;
@property (nonatomic) unsigned long long n;
@property (nonatomic, getter=isAND) BOOL AND;
@property (nonatomic, getter=isOR) BOOL OR;
@property (retain, nonatomic) NSArray *submechanisms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
