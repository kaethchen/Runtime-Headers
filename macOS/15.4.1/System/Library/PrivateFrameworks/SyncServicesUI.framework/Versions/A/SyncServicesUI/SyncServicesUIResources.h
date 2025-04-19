@interface SyncServicesUIResources : NSObject

+ (id)multipleComputersLoggedInString;
+ (id)badgeIcon:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 withClientIcon:(id)a2 clientSize:(struct CGSize { double x0; double x1; })a3 badgeAtPoint:(struct CGPoint { double x0; double x1; })a4;
+ (double)heightForString:(id)a0 withFont:(id)a1 forWidth:(double)a2;
+ (id)principleClientIdentifierForDataClassName:(id)a0;
+ (id)syncServicesComputerIconURL;
+ (id)syncServicesIconURL;
+ (id)syncingCannotBeEnabledString;

@end
