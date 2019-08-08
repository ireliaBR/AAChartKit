//
//  AAYAxis.h
//  AAChartKit
//
//  Created by An An on 17/1/5.
//  Copyright © 2017年 An An. All rights reserved.
//*************** ...... SOURCE CODE ...... ***************
//***...................................................***
//*** https://github.com/AAChartModel/AAChartKit        ***
//*** https://github.com/AAChartModel/AAChartKit-Swift  ***
//***...................................................***
//*************** ...... SOURCE CODE ...... ***************

/*
 
 * -------------------------------------------------------------------------------
 *
 * 🌕 🌖 🌗 🌘  ❀❀❀   WARM TIPS!!!   ❀❀❀ 🌑 🌒 🌓 🌔
 *
 * Please contact me on GitHub,if there are any problems encountered in use.
 * GitHub Issues : https://github.com/AAChartModel/AAChartKit/issues
 * -------------------------------------------------------------------------------
 * And if you want to contribute for this project, please contact me as well
 * GitHub        : https://github.com/AAChartModel
 * StackOverflow : https://stackoverflow.com/users/7842508/codeforu
 * JianShu       : https://www.jianshu.com/u/f1e6753d4254
 * SegmentFault  : https://segmentfault.com/u/huanghunbieguan
 *
 * -------------------------------------------------------------------------------
 
 */

#import <Foundation/Foundation.h>

@class AAAxisTitle,AALabels,AACrosshair,AAStyle;

typedef NSString *AAYAxisGridLineInterpolation;
static AAYAxisGridLineInterpolation const AAYAxisGridLineInterpolationCircle  = @"circle";//圆形
static AAYAxisGridLineInterpolation const AAYAxisGridLineInterpolationPolygon = @"polygon";//多边形

@interface AAYAxis : NSObject

//AAPropStatementAndPropSetFuncStatement(assign, AAYAxis, BOOL,       min) 
AAPropStatementAndPropSetFuncStatement(strong, AAYAxis, AAAxisTitle  *, title)
AAPropStatementAndPropSetFuncStatement(strong, AAYAxis, NSArray  *, plotBands)
AAPropStatementAndPropSetFuncStatement(strong, AAYAxis, NSArray  *, plotLines)
AAPropStatementAndPropSetFuncStatement(strong, AAYAxis, NSArray  *, categories)
AAPropStatementAndPropSetFuncStatement(assign, AAYAxis, BOOL,       reversed)
AAPropStatementAndPropSetFuncStatement(strong, AAYAxis, NSNumber *, gridLineWidth) // y 轴网格线宽度
AAPropStatementAndPropSetFuncStatement(copy,   AAYAxis, NSString *, gridLineColor) // y 轴网格线颜色
AAPropStatementAndPropSetFuncStatement(copy,   AAYAxis, NSString *, gridLineDashStyle) //网格线线条样式，所有可用的线条样式参考：Highcharts线条样式
AAPropStatementAndPropSetFuncStatement(copy,   AAYAxis, NSString *, alternateGridColor) //backcolor of every other grid line area
AAPropStatementAndPropSetFuncStatement(copy,   AAYAxis, AAYAxisGridLineInterpolation, gridLineInterpolation) //Polar charts only. Whether the grid lines should draw as a polygon with straight lines between categories, or as circles. Can be either circle or polygon. 默认是：null.
AAPropStatementAndPropSetFuncStatement(strong, AAYAxis, AALabels *, labels) //用于设置 y 轴文字相关的
AAPropStatementAndPropSetFuncStatement(strong, AAYAxis, NSNumber *, lineWidth) // y 轴线宽度
AAPropStatementAndPropSetFuncStatement(copy,   AAYAxis, NSString *, lineColor) // y 轴线颜色
AAPropStatementAndPropSetFuncStatement(strong, AAYAxis, NSNumber *, offset) // y 轴线水平偏移

AAPropStatementAndPropSetFuncStatement(assign, AAYAxis, BOOL,       allowDecimals)  //y轴是否允许显示小数
AAPropStatementAndPropSetFuncStatement(assign, AAYAxis, NSNumber *, max)  //y轴最大值
AAPropStatementAndPropSetFuncStatement(assign, AAYAxis, NSNumber *, min)  //y轴最小值（设置为0就不会有负数）
//AAPropStatementAndPropSetFuncStatement(assign, AAYAxis, NSNumber *, minPadding)  //Padding of the min value relative to the length of the axis. A padding of 0.05 will make a 100px axis 5px longer. This is useful when you don't want the lowest data value to appear on the edge of the plot area. 默认是：0.05.

AAPropStatementAndPropSetFuncStatement(assign, AAYAxis, BOOL,       visible)  //y轴是否允许显示
AAPropStatementAndPropSetFuncStatement(assign, AAYAxis, BOOL,       opposite) //是否将坐标轴显示在对立面，默认情况下 x 轴是在图表的下方显示，y 轴是在左方，坐标轴显示在对立面后，x 轴是在上方显示，y 轴是在右方显示（即坐标轴会显示在对立面）。该配置一般是用于多坐标轴区分展示，另外在 Highstock 中，y 轴默认是在对立面显示的。 默认是：false.
AAPropStatementAndPropSetFuncStatement(strong, AAYAxis, AACrosshair*, crosshair)  //准星线样式设置
AAPropStatementAndPropSetFuncStatement(strong, AAYAxis, AALabels *, stackLabels)
AAPropStatementAndPropSetFuncStatement(strong, AAYAxis, NSNumber *, tickAmount)//刻度总数
AAPropStatementAndPropSetFuncStatement(copy,   AAYAxis, NSString *, tickColor) // 刻度线颜色
AAPropStatementAndPropSetFuncStatement(strong, AAYAxis, NSNumber *, tickInterval) 
AAPropStatementAndPropSetFuncStatement(strong, AAYAxis, NSNumber *, tickWidth) //坐标轴刻度线的宽度，设置为 0 时则不显示刻度线
AAPropStatementAndPropSetFuncStatement(strong, AAYAxis, NSNumber *, tickLength)//坐标轴刻度线的长度。 默认是：10.
AAPropStatementAndPropSetFuncStatement(copy,   AAYAxis, NSString *, tickPosition) //刻度线相对于轴线的位置，可用的值有 inside 和 outside，分别表示在轴线的内部和外部。 默认是：outside.
AAPropStatementAndPropSetFuncStatement(strong, AAYAxis, NSArray  *, tickPositions) //自定义Y轴坐标（如：[@(0), @(25), @(50), @(75) , (100)]）

@end

@interface AAAxisTitle : NSObject

AAPropStatementAndPropSetFuncStatement(copy,   AAAxisTitle, NSString *, align)
AAPropStatementAndPropSetFuncStatement(copy,   AAAxisTitle, NSString *, margin)
AAPropStatementAndPropSetFuncStatement(strong, AAAxisTitle, NSNumber *, offset)
AAPropStatementAndPropSetFuncStatement(strong, AAAxisTitle, NSNumber *, rotation)
AAPropStatementAndPropSetFuncStatement(strong, AAAxisTitle, AAStyle  *, style)
AAPropStatementAndPropSetFuncStatement(copy,   AAAxisTitle, NSString *, text)
AAPropStatementAndPropSetFuncStatement(strong, AAAxisTitle, NSNumber *, x) //标题相对于水平对齐的偏移量，取值范围为：图表左边距到图表右边距，可以是负值，单位px。 默认是：0.
AAPropStatementAndPropSetFuncStatement(strong, AAAxisTitle, NSNumber *, y) //标题相对于垂直对齐的偏移量，取值范围：图表的上边距（chart.spacingTop ）到图表的下边距（chart.spacingBottom），可以是负值，单位是px。默认值和字体大小有关。

@end
