@class NSString, NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CGVirtualDisplayDescriptor : NSObject {
    id /* block */ _terminationHandler;
    NSMutableDictionary *_displayInfo;
}

@property (readonly, nonatomic) NSDictionary *displayInfo;
@property (nonatomic) unsigned int vendorID;
@property (nonatomic) unsigned int productID;
@property (nonatomic) unsigned int serialNumber;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) struct CGSize { double width; double height; } sizeInMillimeters;
@property (nonatomic) unsigned int maxPixelsWide;
@property (nonatomic) unsigned int maxPixelsHigh;
@property (nonatomic) struct CGPoint { double x0; double x1; } redPrimary;
@property (nonatomic) struct CGPoint { double x0; double x1; } greenPrimary;
@property (nonatomic) struct CGPoint { double x0; double x1; } bluePrimary;
@property (nonatomic) struct CGPoint { double x0; double x1; } whitePoint;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ terminationHandler;
@property (nonatomic) unsigned int serialNum;

- (void)dealloc;
- (id)init;
- (id)dispatchQueue;
- (void)setDispatchQueue:(id)a0;
- (void)setDisplayInfoValue:(id)a0 forKey:(id)a1;

@end
