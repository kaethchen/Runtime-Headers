@class NSString;

@interface PXPhotosGridAddButtonViewUserData : NSObject <PXGViewUserData>

@property (readonly, nonatomic) long long style;
@property (readonly, copy, nonatomic) id /* block */ actionHandler;
@property (nonatomic) long long preferredUserInterfaceStyle;
@property (nonatomic) double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 actionHandler:(id /* block */)a1;

@end
