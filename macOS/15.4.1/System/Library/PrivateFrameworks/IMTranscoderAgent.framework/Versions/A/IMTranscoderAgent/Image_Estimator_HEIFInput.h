@class NSSet;

@interface Image_Estimator_HEIFInput : NSObject <MLFeatureProvider>

@property (nonatomic) double Input_File_Size;
@property (nonatomic) double Input_Height;
@property (nonatomic) double Input_Entropy;
@property (nonatomic) double Aspect_Ratio;
@property (nonatomic) double Target_File_Size;
@property (nonatomic) long long Target_Max_Dimension_4032;
@property (nonatomic) long long Target_Max_Dimension_3000;
@property (nonatomic) long long Target_Max_Dimension_2048;
@property (nonatomic) long long Target_Max_Dimension_1600;
@property (nonatomic) long long Target_Max_Dimension_1280;
@property (nonatomic) long long Target_Max_Dimension_1024;
@property (nonatomic) long long Target_Max_Dimension_800;
@property (nonatomic) double Compression_Ratio;
@property (nonatomic) double Input_H_x_W__NumOfPixels_;
@property (nonatomic) double Target_Height;
@property (nonatomic) double Target_Width;
@property (nonatomic) double Input_log_NumOfPixels_;
@property (nonatomic) double Ratio_of_NumOfPixels;
@property (nonatomic) double Exponential_Entropy;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithInput_File_Size:(double)a0 Input_Height:(double)a1 Input_Entropy:(double)a2 Aspect_Ratio:(double)a3 Target_File_Size:(double)a4 Target_Max_Dimension_4032:(long long)a5 Target_Max_Dimension_3000:(long long)a6 Target_Max_Dimension_2048:(long long)a7 Target_Max_Dimension_1600:(long long)a8 Target_Max_Dimension_1280:(long long)a9 Target_Max_Dimension_1024:(long long)a10 Target_Max_Dimension_800:(long long)a11 Compression_Ratio:(double)a12 Input_H_x_W__NumOfPixels_:(double)a13 Target_Height:(double)a14 Target_Width:(double)a15 Input_log_NumOfPixels_:(double)a16 Ratio_of_NumOfPixels:(double)a17 Exponential_Entropy:(double)a18;

@end
