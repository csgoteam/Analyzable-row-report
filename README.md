# Analyzable-row-report

# 1引言
## 1.1项目概述
传统的书店受时间和空间的限制，导致不能发挥更大的商业价值，所以网上书店已经成为了传统书店必须的经营路线之一。如何更好的对网络书店进行管理已经成为了必不可少的关键部分，而优良的管理离不开优良的管理系统。本管理系统通过学习其他同类型的系统，总结出了更好的设计模式和优化了的系统设计，更加的简洁明了，不仅提供方便了管理人员的操作页面，也提供了方便各年龄层使用的系统提供的界面。
系统提供了图书出入库管理功能、客户管理功能、基于大数据给网站用户的分类推荐功能、网站在线交易功能、图书预览功能，用户、管理员交互界面等多种基本功能，含盖了传统书店和一般网络书店的基本功能并有新的优化和新的功能，使用起来更加得心应手。

# 2引用文件
本章应列出本文档引用的所有文档的编号、标题、修订版本和日期，本章也应标识不能通过正常的供货渠道获得的所有文档的来源。

# 3可行性分析的前提
## 3.1项目的目标
在移动互联网的普及下，网上书店可以让众多读者更加方便的寻找到自己所需要的书籍，可以随时查阅、购买，更加便捷和快速，而且网上书店可以为读者节约大量时间，网上书店具有良好的发展潜力，可以为书店和读者带来双赢的局面，制作出合适管理员管理和用户交互感良好的网上书店系统。

# 4可选的方案
 利用传统开发过程模型进行软件开发，利用敏捷开发模型进行软件开发
 
## 4.1可选择的系统方案1——用传统开发过程（如瀑布模型）模型进行软件开发
### (1)软件概念：
 经过深入的研究和分析，开发人员需要准确理解了用户和项目的功能、性能、可靠性等具体要求，将用户的非正规需求陈述转化为对需求的完整定义，以便确定系统必须执行哪些操作。
### (2)用户需求分析：
 此步骤包括定义硬件和软件体系结构、组件、模块、接口和数据，以满足指定的要求。这包括硬件和软件体系结构的定义、性能和安全参数的定义、数据存储容器和限制的设计、集成开发环境和编程语言的选择，以及指定异常处理、资源管理和接口连接策略。
### (3)架构设计：
 这一步包含了根据设计说明书来构建产品
### (4)编码：
 在这一阶段，独立的组件和集成后的组件都将进行系统性验证以确保没有错误并且完全符合第一阶段所制定的需求。
### (5)测试：
 在产品通过测试并且被鉴定为符合需求的产品后，就会进入到安装阶段，这一阶段包括了在客户站点进行系统或产品的安装和使用。
### (6)系统维护：
 此阶段发生在安装后，包括对整个系统或组件的修改，以更改属性或提高性能，这可能是由于客户需求的变化或系统使用中未涵盖的缺陷造成的。

## 4.2可选择的系统方案2——利用敏捷开发模型进行软件开发
### (1)策划阶段
 首先在策划阶段，用户和开发者进行交流，开发者总结出一系列网上书店功能。之后客户对这些功能进行优先级排序，开发者评估每一个功能的成本。之后客户和开发者共同决定在开发的下一个版本中将会新增哪些功能。而在版本不断的迭代的过程中，会进行很多次这样的策划过程，每一次客户都可以根据已有的功能来决定是否要新增一些功能，以及要新增哪些功能。
### (2)设计阶段
 在设计阶段，开发人员会根据用户要求，提出这些要求的实现方案。设计的过程中主要遵循简洁的原则，也就是尽量使用简介的表述而不是复杂的表述。而设计的另一个方面则是重构，重构是一种通过不改变代码的外部功能的情况下改变软件模块的内部结构从而优化软件系统的功能的过程。这是一种改进代码的设计。
### (3)编码阶段
 开发者开发的第一件任务不是直接对初步的设计和用户故事进行编码，而是针对这些设计全力开发单元测试。完成了单元测试也就确定了开发者要实现的所有功能。这样开发者就只需要全力通过单元测试，而不必在实现什么功能上再浪费不必要的时间和精力。这正体现了敏捷开发的以测试驱动的特点。
### (4)测试阶段
每一个模块都通过自己的单元测试之后，开发者会将所有的模块集成到一起进行测试。这样可以及时发现每一模块在最近一次改动之中出现的问题同时避免一些兼容性问题。每一次改动一点小问题要比等到最后一次集中修改所有问题要容易得多。

## 4.3选择最终方案的准则

# 5所建议的系统

## 5.1对所建议的系统的说明
该系统是基于局域网的网上书店。整个系统以数据库为中心，共享数据库的数据。本系统主要涉及图书基本信息的管理以及图书的购买、图书剩余数量、图书的销售数据。该系统的实施将大大的提供图书销售员的工作效率，给管理员已经节约宝贵的时间。主要功能如下:
搜索
按照书名，书的isbn号，作者来检索相关的书
购买下单
下单需要的书之后，销售员可以看到后台销售的书的种类，数量。
进货
书的剩余数量不够，销售员需要进货，添加书的数量

## 5.2数据流程和处理流程
![WV {EZ~${K6%X9TT)H@ZVKO](https://user-images.githubusercontent.com/71536618/224213724-59bbc9e9-ee32-4d92-8da2-712d30b18d23.jpg)

## 5.3与原系统的比较(若有原系统)

## 5.4影响(或要求)

### 5.4.1软件
系统运行时的主界面大致要求为 windows 的经典运行界面，主界面可以是SDI(单文档界面）即每个窗体之间是独立的，也可以是MDI(多文档界面)∶有一个主窗体，可以包含其他窗体。建议本系统采用多文档界面，这样可以使程序更加美观，整齐有序。

### 5.4.2运行
1.软件设计应当表现出层次结构，它应巧妙地利用各个软件部件之间的控制关系。2.设计应当是模块化的，即该软件应当从逻辑上被划分成多个部件，分别实现各种特定功能和子功能。
3.设计最终应当给出具体的模块（例如子程序或过程)，这些模块就具有独立的功能特性。4.应当应用在软件需求分析期间得到的信息，采取循环反复的方法来获得。设计。

### 5.4.3开发
概要设计->详细设计->编码->测试->验收

### 5.4.4环境
windows 10，visual studio，qt，GUI

## 5.5局限性

# 6其他与项目有关的问题
## (1)利用传统开发过程模型进行软件开发与利用敏捷开发模型进行软件开发的比较分析
  与传统开发方法相比，在敏捷开发的整个过程中，有以下几个主要的特点：
### 
 ①敏捷开发的过程有着更强的适应性而不是预设性，从敏捷宣言的第四条响应变化高于预设计划便可以看出来。因为软件开发过程的本身的不可预见性，很多用户在项目开始时不可能对于这个项目有着一个完整而明确的预期。很多对软件的预期都在后期的修改和完善过程中产生。因此高适应性显然更加符合软件工程开发的实际。而敏捷开发实现其适应性的方式主要在于，第一，缩短把项目提交给用户的周期；第二，增加用户，业务人员，开发人员这三者之间的交流；第三，通过减少重构的成本以增加软件的适应性。
### 
 ②敏捷开发的过程中，更加的注重人的因素。在传统软件工程中，个人的因素很少的被考虑到分工中，每个个体都是只是整个代码开发机器的一个小小的螺丝钉，个人的意志和创造力很大程度上的被抹去为了更好的为集体服务。而在敏捷开发过程中，每个个人的潜力被充分的考虑，应用什么技术很大程度上直接由在第一线开发的技术人员决定；每个人的特点和创造力都可以充分地发挥，这样开发出来的软件更加的具有生命力，因为他融入了开发者的心血和创意，开发者不再是进行机械的乏味的堆砌，而是创造属于自己的艺术品，这样的条件下产生的代码必然在质量上更占优势。
### 
 ③在敏捷开发的过程中，整个项目是测试驱动的而不是文档驱动的。不仅每个模块有着自己的相应的测试单元，开发人员在开发自己的模块的过程中必须保证自己所开发的模块可以通过这一单元的测试，并且集成测试贯穿了整个开发过程的始终。集成测试每天会进行十几次甚至几十次，而不是像传统方法一样只有当各个模块的编码都结束了之后再进行联合调试。这样，在软件开发的进程中每一点改动所引起的问题都容嘉容易暴露出来，使得更加容易在错误刚刚产生的时候发现问题从而解决问题。这样就避免了在最后整个系统完成时错误隐藏的太深给调试造成极大的困难。
### 
 ④与传统开发方式相比，敏捷开发的最主要的劣势在于敏捷开发欢迎新的需求，而在每次新的需求产生时都可能引起整个系统的大幅度的修改。因为开发者在开发上一个版本的时候，完全没有考虑以后的优化将要如何进行。这样的开发方式实际的软件开发过程中，并不一定总是有效的。而另一个方面，敏捷开发因为缺乏很多在敏捷开发中被认为“不重要”的文档，这样在一个大型项目比如一个操作系统开发的时候，由于其项目周期很长，所以很难保证开发的人员不更换，而没有文档就会造成在交接的过程中出现很大的困难。
## (2)Scrum过程工作模型
在Scrum中有三个角色：产品负责人，团队和ScrumMaster。他们在一起被称为Scrum团队。
一个好的产品待办事项列表要做到DEEP:
### 
粗细适宜的（Detailed appropriately）。 优先级列表顶端的事项比低级别的事项更为精确和详细，因为前者要比后者先被开发。比如，待办事项列表顶端的百分之十可能包含非常小且分析得很详细的事项，而其他的百分之九十则不是那么具体。 
### 
估算过的（Estimated）。当前发布版本的事项需要有估算，而且随着大家了解得更多和新信息的融入应当在每个Sprint中重新考虑这些估算。团队提供给产品负责人产品待办事项列表中每个事项的工作量估算和技术风险估算。产品负责人和其他商业利益相关人提供产品需求的价值信息，其中可能会包括获得的收益、减少的成本、商业风险、对不同利益相关人的重要性等等。 
### 
涌现式的（Emergent）。为了响应学习和变化，要定期梳理产品待办事项列表。每个Sprint，可能要加入、删除、修改、分解或者调整事项的优先级别。因此，产品负责人会不断地更新产品待办事项列表，以反映客户需求的变化、新想法或见解、竞争而导致的变化、出现的技术障碍等等。 
### 
排好优先级的（Prioritized）。在产品待办事项列表顶端的事项具有最高优先级，或者是从1开始顺序排列。一般来说，最高优先级别的事项应当最物超所值：高收益（商业价值）低花销（成本）。提高某事项优先级的另一诱因是在高风险来袭之前及早解决掉它。
### 
在Scrum中有一个常见的做法是追踪每个Sprint完成的工作量，比如每个Sprint平均完成26点。如果保持平均水平并且没有其他变化的条件下，根据这个信息他们可以预测出完成所有特性的发布日期，或到特定日期可以完成多少特性。这个平均值就称为“速率”。速率与产品待办事项列表事项规模估算用相同的单位来表达。
### 
Sprint评审会议中“运行起来的软件”这部分并不是由团队来做“报告”，不会用到幻灯片。它是指亲手来检验正在运行的真正的软件，例如在一个用于开发的沙盒环境中。在评审会议议室里会有一台或多台电脑，人们可以在上面检验和使用运行起来的软件。最好有一个积极交互的过程，由真实用户和产品负责人动手与软件交互，而不是由团队做出一个被动的展示过程。
### 
在评审会议之后的“Sprint回顾会议”则包含了针对流程和环境的审视并调整。这是团队讨论什么方式能工作，什么方式不工作的机会，并对要尝试的改变达成一致意见。有时ScrumMaster可以扮演回顾会议的效率协调者，但可能还是找一个中立的外人来协调这个会议更好。一个好的做法是，ScrumMaster们互相帮助协调彼此的回顾会议，这会起到在团队间“交叉受粉”的效果。
### 
在初始产品待办事项列表梳理研讨会和每个Sprint中持续对待办事项列表梳理的过程中，团队和产品负责人将会进行发布计划，并随着知识的增加而梳理估算、优先级排列和内容。

## (3)练习项目跟踪工具的使用，如用甘特图记录跟踪项目过程
###
(1)打开一个project文档，做好计划，然后设置好基准。
###
(2)展开甘特图，选择跟踪甘特图，我们切换到跟踪甘特图的视图。
###
(3)在跟踪甘特图中，我们插入开始时间和实际完成时间这两列。
###
(4)把已经开始或完成的任务实际开始时间和完成时间输入进去。
###
(5)在条形图中看到每个任务的关系,根据任务的情况，考虑后面的管控，比如是赶工，压缩进度等等。


## (4)风险管理
### 
 ① 项目中可能存在的风险：需求变更带来的时间、质量、金钱、控制以及理解的损失，计划编制风险，组织和管理风险，人员风险、开发环境风险、设计和实现风险、过程风险
### 
 ② 风险分级：由于我们是学生项目，需求相对固定，人员相对固定，因此主要的风险在于计划编制风险、设计和实现风险、开发环境风险以及设计和实现风险，同时，我们认为最大的风险在于难以在规定时间内保质保量的完成软件的开发，因此我们将设计和实现风险设置为最大风险，其次，我们认为设计的过程可能遇到一些技术问题带来整个软件的崩溃和开发停滞，因此我们将过程风险设置为第二风险，随后的风险是计划编制风险。
### 
 ③ 风险预防方案：对于设计和实现风险，我们可以通过更合理的开发进度来保证，为每一部分功能制定合适的时间计划，确保开发进度以及开发的正确。对于过程风险，我们需要进行回归测试以及对软件的开发进度进行分布式开发，保留版本更迭过程，防止由于后面的错误开发使得前面所有工作前功尽弃。同时，我们需要制定合理的计划以及合理的分工架构，确保所有工作都能及时完成且分工明确以尽量避免人员风险和计划编制风险。同时，需要在开发过程中不断进行风险评估，发现新的风险并采取方案尽量解决。
 
## (5)工作集模型

我们正在开发的是一个网上书店应用程序。

之前从未开发过这种应用程序 very low   PREC=6.20
比较严格的软件工程文档要求 High       FLEX=2.03
要求不会改变               very high   RESL=1.41
团队非常团结               very high    TEAM=1.10
流程非正式                 very low    PMAT=6.24


SF=0.91+0.01*(6.20+2.03+1.41+1.10+6.24)=0.91+0.01*(16.98)=1.0798


代码量大概是5KLOC


PM=2.94*10^1.0798=35.3303





成本驱动因子如下：

PCPX (产品的可靠性和复杂度)             very high               1.91
PDIF (平台难度)                         very high               1.81
PERS (人员的能力)                       extra high              0.50
PREX (人员的经验)                       nominal                 1.00



PM = 35.3303 x 1.91 x1.81 x 0.5 = 61.0701
TDEV=3.678*(61.0701)^(0.28+0.2*(1.0798-0.91))=13.3748
# 附录
附录可用来提供那些为便于文档维护而单独出版的信息(例如图表、分类数据)。为便于处理附录可单独装订成册。附录应按字母顺序(A，B等)编排。
